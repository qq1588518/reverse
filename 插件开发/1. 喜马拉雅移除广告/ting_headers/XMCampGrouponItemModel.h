//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface XMCampGrouponItemModel : NSObject
{
    NSString *_userPic;
    NSString *_userName;
    long long _grouponId;
    long long _initiateUserId;
    long long _availableQuantity;
    long long _deadline;
    long long _seconds;
    long long _remainMilliseconds;
}

@property(nonatomic) long long remainMilliseconds; // @synthesize remainMilliseconds=_remainMilliseconds;
@property(nonatomic) long long seconds; // @synthesize seconds=_seconds;
@property(nonatomic) long long deadline; // @synthesize deadline=_deadline;
@property(nonatomic) long long availableQuantity; // @synthesize availableQuantity=_availableQuantity;
@property(nonatomic) long long initiateUserId; // @synthesize initiateUserId=_initiateUserId;
@property(nonatomic) long long grouponId; // @synthesize grouponId=_grouponId;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *userPic; // @synthesize userPic=_userPic;
- (void).cxx_destruct;

@end

