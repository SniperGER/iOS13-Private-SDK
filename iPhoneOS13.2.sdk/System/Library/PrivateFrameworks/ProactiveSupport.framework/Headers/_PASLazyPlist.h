//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface _PASLazyPlist : NSObject
{
    NSData *_backingData;
    CDStruct_601793be _mappedRegion;
    const struct __CFAllocator *_stringContentsDeallocator;
}

+ (void)setDeserializationStatsHandler:(id /* block */)arg1;
+ (id /* block */)deserializationStatsHandler;
+ (void)setSerializationStatsHandler:(id /* block */)arg1;
+ (id /* block */)serializationStatsHandler;
+ (_Bool)isLazyPlistLikelyContainedInFileAtPath:(id)arg1 version:(unsigned long long *)arg2;
+ (_Bool)isLazyPlistLikelyContainedInData:(id)arg1 version:(unsigned long long *)arg2;
+ (id)fileBackedDataWithPropertyList:(id)arg1 appendedToFd:(int)arg2 startOfs:(long long *)arg3 error:(id *)arg4;
+ (id)fileBackedDataWithPropertyList:(id)arg1 writtenToPath:(id)arg2 error:(id *)arg3;
+ (id)dataWithPropertyList:(id)arg1 error:(id *)arg2;
+ (id)arrayWithData:(id)arg1 error:(id *)arg2;
+ (id)arrayWithPath:(id)arg1 error:(id *)arg2;
+ (id)dictionaryWithData:(id)arg1 error:(id *)arg2;
+ (id)dictionaryWithPath:(id)arg1 error:(id *)arg2;
+ (id)propertyListWithPath:(id)arg1 fileRange:(struct _NSRange)arg2 error:(id *)arg3;
+ (id)propertyListWithPath:(id)arg1 error:(id *)arg2;
+ (id)propertyListWithData:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) const struct __CFAllocator *stringContentsDeallocator; // @synthesize stringContentsDeallocator=_stringContentsDeallocator;
- (id)_objectForValue:(CDStruct_c0454aff)arg1 errMsg:(id *)arg2;
- (_Bool)_decodeDictionaryKeyValue:(CDStruct_c0454aff)arg1 handleString:(id /* block */)arg2 errMsg:(id *)arg3;
- (_Bool)_decodeValue:(CDStruct_c0454aff)arg1 handleBoolean:(id /* block */)arg2 handleTaggedInt:(id /* block */)arg3 handleBoxedInt:(id /* block */)arg4 handleTaggedFloat:(id /* block */)arg5 handleBoxedFloat:(id /* block */)arg6 handleDate:(id /* block */)arg7 handleData:(id /* block */)arg8 handleString:(id /* block */)arg9 handleDict:(id /* block */)arg10 handleArray:(id /* block */)arg11 errMsg:(id *)arg12;
- (id)_objectForValue:(CDStruct_c0454aff)arg1;
- (id)_rootObjectWithErrMsg:(id *)arg1;
- (_Bool)_validateObjectGraphWithFilename:(id)arg1 rootValue:(CDStruct_c0454aff)arg2 recursionDepth:(unsigned long long)arg3 stats:(struct _PASLPObjectGraphStats *)arg4 error:(id *)arg5;
- (_Bool)_validateObjectGraphWithFilename:(id)arg1 stats:(struct _PASLPObjectGraphStats *)arg2 error:(id *)arg3;
- (_Bool)_validateStringTableWithFilename:(id)arg1 stats:(struct _PASLPObjectGraphStats *)arg2 error:(id *)arg3;
- (_Bool)_validateHeader:(const struct _PASLPHeader *)arg1 filename:(id)arg2 error:(id *)arg3;
- (id)_initWithData:(id)arg1 sourcedFromPath:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) const CDStruct_601793be *mappedRegion;
- (id)init;
- (void)_retainForStringAllocation;
- (void)dealloc;

@end
