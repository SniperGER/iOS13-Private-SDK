//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AMSDoubleLinkedListNode, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface AMSDoubleLinkedList : NSObject
{
    NSUInteger _count;
    AMSDoubleLinkedListNode *_head;
    AMSDoubleLinkedListNode *_tail;
    NSString *_listIdentifier;
}

@property(retain, nonatomic) NSString *listIdentifier; // @synthesize listIdentifier=_listIdentifier;
@property(retain, nonatomic) AMSDoubleLinkedListNode *tail; // @synthesize tail=_tail;
@property(retain, nonatomic) AMSDoubleLinkedListNode *head; // @synthesize head=_head;
@property(readonly, nonatomic) NSUInteger count; // @synthesize count=_count;
// - (void).cxx_destruct;
- (id)description;
- (void)removeNode:(id)arg1;
- (void)removeAllNodes;
- (id)insertObject:(id)arg1;
- (void)insertNode:(id)arg1;
- (id)appendObject:(id)arg1;
- (void)appendNode:(id)arg1;
@property(readonly, nonatomic) NSArray *allNodes;
- (id)init;

@end
