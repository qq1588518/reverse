//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface M3U8SegmentInfoList : NSObject
{
    NSMutableArray *_segmentInfoList;
}

@property(retain, nonatomic) NSMutableArray *segmentInfoList; // @synthesize segmentInfoList=_segmentInfoList;
- (void).cxx_destruct;
- (id)description;
- (id)segmentInfoAtIndex:(unsigned long long)arg1;
- (void)addSegementInfo:(id)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (id)init;

@end

