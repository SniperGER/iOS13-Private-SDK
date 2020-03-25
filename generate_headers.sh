#!/bin/bash

#rm -fr iOS
#rm -fr watchOS

#mkdir -p iOS/PrivateFrameworks
#mkdir -p watchOS/PrivateFrameworks
#mkdir -p iOS/PrivateFrameworks

while getopts ":o:" opt; do
    case $opt in
        o) OUTPUT_DIR="$OPTARG"
        ;;
    esac
done

echo "OUTPUT_DIR=$OUTPUT_DIR"

if [[ ! -n $OUTPUT_DIR ]]; then
    echo -e "Insufficient arguments.\nNo output path (-o) specified\n"
    exit 1
fi

mkdir -p $OUTPUT_DIR

visitFrameworkOrApp() {
	FRAMEWORK="$1"
	ARCH="$2"
	BASEPATH="$3"

	if [[ -f "$FRAMEWORK" ]]; then
		FRAMEWORK_BASENAME="${${$(basename "$FRAMEWORK")%.*}##lib}"
	else
		FRAMEWORK_BASENAME="$(basename "$FRAMEWORK")"
	fi

	echo -e "Processing \033[1;32m$FRAMEWORK_BASENAME\033[0m..."
	./class-dump --arch "$ARCH" -H -o "$BASEPATH/$FRAMEWORK_BASENAME/Headers" "$FRAMEWORK"

#		if [[ -d "$FRAMEWORK/Frameworks" ]]; then
#			for INNER_FRAMEWORK in "${FRAMEWORK}"/Frameworks/* ; do
#				visitFrameworkOrApp "$INNER_FRAMEWORK" "$ARCH" "$BASEPATH/$FRAMEWORK_BASENAME"/Frameworks
#			done
#		fi
#
#		if [[ -d "$FRAMEWORK/Support" ]]; then
#			for INNER_FRAMEWORK in "${FRAMEWORK}"/Support/* ; do
#				visitFrameworkOrApp "$INNER_FRAMEWORK" "$ARCH" "$BASEPATH/$FRAMEWORK_BASENAME"/Support
#			done
#		fi

}

for FRAMEWORK in "$(xcode-select -p)"/Platforms/iPhoneOS.platform/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/*.framework ; do
visitFrameworkOrApp "$FRAMEWORK" x86_64 $OUTPUT_DIR
done

for FRAMEWORK in "$(xcode-select -p)"/Platforms/iPhoneOS.platform/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS.simruntime/Contents/Resources/RuntimeRoot/System/Library/NanoPreferenceBundles/Customization/NTKCustomization.bundle ; do
visitFrameworkOrApp "$FRAMEWORK" x86_64 $OUTPUT_DIR
done
