//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface XMHearBadgeProvider : NSObject
{
}

+ (void)resetHearSoundFeedDisplayModeType;
+ (long long)getHearSoundFeedDisplayModeType;
+ (void)saveHearSoundFeedDisplayModeType:(long long)arg1;
+ (void)resetHearModuleWhenLogout;
+ (void)resetHearSoundFeedSortType;
+ (long long)getHearSoundFeedSortType;
+ (void)saveHearSoundFeedSortType:(long long)arg1;
+ (void)resetPaidCount;
+ (void)resetLastPaidCount;
+ (id)paidType:(unsigned long long)arg1;
+ (long long)paidCountWithPaidType:(unsigned long long)arg1;
+ (void)setPaidCount:(long long)arg1 withPaidType:(unsigned long long)arg2;
+ (_Bool)isShowDownloadRedView;
+ (void)setShowDownloadRedView:(_Bool)arg1;

@end

