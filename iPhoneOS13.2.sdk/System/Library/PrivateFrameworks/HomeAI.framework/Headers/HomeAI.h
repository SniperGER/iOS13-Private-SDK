#import <HomeAI/AVAssetResourceLoaderDelegate-Protocol.h>
#import <HomeAI/AVAssetWriterDelegate-Protocol.h>
#import <HomeAI/CDStructures.h>
#import <HomeAI/HMFLogging-Protocol.h>
#import <HomeAI/HMFTimerDelegate-Protocol.h>
#import <HomeAI/HMIAnalysisService.h>
#import <HomeAI/HMICameraVideoAnalyzer.h>
#import <HomeAI/HMICameraVideoAnalyzerConfiguration.h>
#import <HomeAI/HMICameraVideoAnalyzerDelegate-Protocol.h>
#import <HomeAI/HMICameraVideoAnalyzerDelegateAdapter.h>
#import <HomeAI/HMICameraVideoAnalyzerHistory.h>
#import <HomeAI/HMICameraVideoAnalyzerRequest.h>
#import <HomeAI/HMICameraVideoAnalyzerRequestLog.h>
#import <HomeAI/HMICameraVideoAnalyzerResult.h>
#import <HomeAI/HMICameraVideoAnalyzerScheduler.h>
#import <HomeAI/HMICameraVideoAnalyzerSignificantEvent.h>
#import <HomeAI/HMICameraVideoAssetReader.h>
#import <HomeAI/HMICameraVideoEncoderSession.h>
#import <HomeAI/HMICameraVideoFragment.h>
#import <HomeAI/HMICameraVideoFrame.h>
#import <HomeAI/HMICameraVideoFrameAnalyzer-Protocol.h>
#import <HomeAI/HMICameraVideoFrameAnalyzerFactory.h>
#import <HomeAI/HMICameraVideoFrameAnalyzerSignificantActivity.h>
#import <HomeAI/HMICameraVideoFrameResult.h>
#import <HomeAI/HMICameraVideoFrameSampler.h>
#import <HomeAI/HMICameraVideoFrameSamplerDelegate-Protocol.h>
#import <HomeAI/HMICameraVideoFrameSelector.h>
#import <HomeAI/HMICameraVideoFrameSelectorDelegate-Protocol.h>
#import <HomeAI/HMICameraVideoFrameSelectorFrameScore.h>
#import <HomeAI/HMICameraVideoPosterFrame.h>
#import <HomeAI/HMICameraVideoPosterFrameGenerator.h>
#import <HomeAI/HMICameraVideoPosterFrameGeneratorInput.h>
#import <HomeAI/HMICameraVideoResourceAttributes.h>
#import <HomeAI/HMIDenseOpticalFlowFrame.h>
#import <HomeAI/HMIDenseOpticalFlowMotionDetection.h>
#import <HomeAI/HMIDenseOpticalFlowMotionDetector.h>
#import <HomeAI/HMIInputFeatureProvider.h>
#import <HomeAI/HMIMemorySampler.h>
#import <HomeAI/HMIMotionDetection.h>
#import <HomeAI/HMIMotionDetector-Protocol.h>
#import <HomeAI/HMINotifydObserver.h>
#import <HomeAI/HMIObjectDetection.h>
#import <HomeAI/HMIObjectDetectionUtils.h>
#import <HomeAI/HMIPIDController.h>
#import <HomeAI/HMIPreference.h>
#import <HomeAI/HMIRegionOfInterestOperation.h>
#import <HomeAI/HMISignificantActivityDetector.h>
#import <HomeAI/HMISparseOpticalFlowFeatureVector.h>
#import <HomeAI/HMISparseOpticalFlowFrame.h>
#import <HomeAI/HMISparseOpticalFlowMotionDetection.h>
#import <HomeAI/HMISparseOpticalFlowMotionDetector.h>
#import <HomeAI/HMISystemResourceUsage.h>
#import <HomeAI/HMISystemResourceUsageMonitor.h>
#import <HomeAI/HMISystemResourceUsageMonitorDelegate-Protocol.h>
#import <HomeAI/HMISystemResourceUsageMonitorImpl.h>
#import <HomeAI/HMISystemResourceUsageMonitorProtocol-Protocol.h>
#import <HomeAI/HMIThermalMonitor.h>
#import <HomeAI/HMIThermalMonitorService.h>
#import <HomeAI/HMIVisionUtilities.h>
#import <HomeAI/MLFeatureProvider-Protocol.h>
#import <HomeAI/MovingAverage.h>
#import <HomeAI/MovingAverageEntry.h>
#import <HomeAI/NSError-HMIError.h>
#import <HomeAI/SignificantActivity.h>
#import <HomeAI/SignificantActivityInput.h>
#import <HomeAI/SignificantActivityOutput.h>