//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface WBPhotoViewerFollowManager : NSObject
{
    NSMutableArray *_followsInfo;
}

@property(retain, nonatomic) NSMutableArray *followsInfo; // @synthesize followsInfo=_followsInfo;
- (void).cxx_destruct;
- (void)handleContactUnFollow:(id)arg1;
- (void)handleContactFollow:(id)arg1;
- (_Bool)isFollowingWithUserID:(id)arg1;
- (void)removeUserID:(id)arg1;
- (void)followUserID:(id)arg1;
- (void)dealloc;
- (id)init;

@end

