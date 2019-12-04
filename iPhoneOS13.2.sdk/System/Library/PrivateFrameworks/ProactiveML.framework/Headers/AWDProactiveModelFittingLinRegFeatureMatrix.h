//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class AWDProactiveModelFittingMinibatchStats, AWDProactiveModelFittingModelInfo, AWDProactiveModelFittingQuantizedSparseMatrix, AWDProactiveModelFittingSparseFloatMatrix;

@interface AWDProactiveModelFittingLinRegFeatureMatrix : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    float _featureMatrixL2norm;
    float _featureMatrixScaleFactor;
    AWDProactiveModelFittingMinibatchStats *_minibatchStats;
    AWDProactiveModelFittingModelInfo *_modelInfo;
    AWDProactiveModelFittingSparseFloatMatrix *_sparseFloatFeatureMatrix;
    AWDProactiveModelFittingQuantizedSparseMatrix *_sparseQuantizedFeatureMatrix;
    struct {
        unsigned int timestamp:1;
        unsigned int featureMatrixL2norm:1;
        unsigned int featureMatrixScaleFactor:1;
    } _has;
}

@property(nonatomic) float featureMatrixL2norm; // @synthesize featureMatrixL2norm=_featureMatrixL2norm;
@property(nonatomic) float featureMatrixScaleFactor; // @synthesize featureMatrixScaleFactor=_featureMatrixScaleFactor;
@property(retain, nonatomic) AWDProactiveModelFittingQuantizedSparseMatrix *sparseQuantizedFeatureMatrix; // @synthesize sparseQuantizedFeatureMatrix=_sparseQuantizedFeatureMatrix;
@property(retain, nonatomic) AWDProactiveModelFittingMinibatchStats *minibatchStats; // @synthesize minibatchStats=_minibatchStats;
@property(retain, nonatomic) AWDProactiveModelFittingSparseFloatMatrix *sparseFloatFeatureMatrix; // @synthesize sparseFloatFeatureMatrix=_sparseFloatFeatureMatrix;
@property(retain, nonatomic) AWDProactiveModelFittingModelInfo *modelInfo; // @synthesize modelInfo=_modelInfo;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasFeatureMatrixL2norm;
@property(nonatomic) _Bool hasFeatureMatrixScaleFactor;
@property(readonly, nonatomic) _Bool hasSparseQuantizedFeatureMatrix;
@property(readonly, nonatomic) _Bool hasMinibatchStats;
@property(readonly, nonatomic) _Bool hasSparseFloatFeatureMatrix;
@property(readonly, nonatomic) _Bool hasModelInfo;
@property(nonatomic) _Bool hasTimestamp;
- (float)featureMatrixValueAtRow:(unsigned long long)arg1 column:(unsigned long long)arg2;
- (_Bool)hasFeatureMatrix;

@end
