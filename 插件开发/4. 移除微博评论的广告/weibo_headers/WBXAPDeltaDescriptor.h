//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WBXAPDeltaFormat, WBXAPTypedRange;

@interface WBXAPDeltaDescriptor : NSObject
{
    long long _deltaLength;
    WBXAPDeltaFormat *_format;
    WBXAPTypedRange *_deltaFriendlyOldFileRange;
    WBXAPTypedRange *_deltaFriendlyNewFileRange;
}

+ (id)deltaDescriptorWithFormat:(id)arg1 OldRange:(id)arg2 NewRange:(id)arg3 DeltaLength:(unsigned long long)arg4;
@property(retain, nonatomic) WBXAPTypedRange *deltaFriendlyNewFileRange; // @synthesize deltaFriendlyNewFileRange=_deltaFriendlyNewFileRange;
@property(retain, nonatomic) WBXAPTypedRange *deltaFriendlyOldFileRange; // @synthesize deltaFriendlyOldFileRange=_deltaFriendlyOldFileRange;
@property(nonatomic) WBXAPDeltaFormat *format; // @synthesize format=_format;
@property(nonatomic) long long deltaLength; // @synthesize deltaLength=_deltaLength;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

