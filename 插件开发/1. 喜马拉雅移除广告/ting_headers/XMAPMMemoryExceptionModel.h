//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class XMAPMMemoryExceptionDumpModel;

@interface XMAPMMemoryExceptionModel : NSObject
{
    float _usageRate;
    float _size;
    int _ioLeakThreshold;
    XMAPMMemoryExceptionDumpModel *_dump;
}

@property(retain, nonatomic) XMAPMMemoryExceptionDumpModel *dump; // @synthesize dump=_dump;
@property(nonatomic) int ioLeakThreshold; // @synthesize ioLeakThreshold=_ioLeakThreshold;
@property(nonatomic) float size; // @synthesize size=_size;
@property(nonatomic) float usageRate; // @synthesize usageRate=_usageRate;
- (void).cxx_destruct;
- (_Bool)modelCustomTransformFromDictionary:(id)arg1;
- (id)debugDescription;
- (_Bool)isEqualConfig:(id)arg1;
- (id)init;

@end

