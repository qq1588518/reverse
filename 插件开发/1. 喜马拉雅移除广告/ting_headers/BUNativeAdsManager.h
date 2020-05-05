//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BUAdSlot, NSArray, NSMutableArray;
@protocol BUNativeAdsManagerDelegate;

@interface BUNativeAdsManager : NSObject
{
    BUAdSlot *_adslot;
    NSArray *_data;
    id <BUNativeAdsManagerDelegate> _delegate;
    NSMutableArray *_adData;
}

@property(retain, nonatomic) NSMutableArray *adData; // @synthesize adData=_adData;
@property(nonatomic) __weak id <BUNativeAdsManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *data; // @synthesize data=_data;
@property(retain, nonatomic) BUAdSlot *adslot; // @synthesize adslot=_adslot;
- (void).cxx_destruct;
- (id)assemblyNativeADWithMaterials:(id)arg1;
- (void)preLoadVideoData;
- (void)fetchAdDataWithTimes:(long long)arg1;
- (void)loadAdDataWithCount:(long long)arg1;
- (id)init;
- (id)initWithSlot:(id)arg1;

@end

