//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosGraph/PGGraphNode.h>

@class NSSet;

@interface PGGraphPetNode : PGGraphNode
{
}

@property(readonly, nonatomic) NSSet *momentNodes;
@property(readonly, nonatomic) NSSet *ownerNodes;
- (void)enumerateMomentNodesUsingBlock:(id /* block */)arg1;
- (void)enumerateOwnerNodesUsingBlock:(id /* block */)arg1;

@end
