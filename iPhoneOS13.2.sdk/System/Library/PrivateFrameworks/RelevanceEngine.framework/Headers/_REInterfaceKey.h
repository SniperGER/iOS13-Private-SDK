//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class Protocol;

@interface _REInterfaceKey : NSObject <NSCopying>
{
    Class _c;
    Protocol *_p;
    _Bool _isClass;
    Class _cls;
    Protocol *_protocol;
}

@property(retain, nonatomic) Protocol *protocol; // @synthesize protocol=_protocol;
@property(retain, nonatomic) Class cls; // @synthesize cls=_cls;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)enumerateExposedMethods:(id /* block */)arg1;
- (void)enumerateExposedProperties:(id /* block */)arg1;
- (void)enumerateConformedProperties:(id /* block */)arg1;
- (void)enumerateAutomaticProperties:(id /* block */)arg1;
- (_Bool)conforms:(id)arg1;
@property(readonly, nonatomic) _REInterfaceKey *superclassKey;
@property(readonly, nonatomic) _Bool isProtocol;
- (id)initWithProtocol:(id)arg1;
- (id)initWithClass:(Class)arg1;

@end
