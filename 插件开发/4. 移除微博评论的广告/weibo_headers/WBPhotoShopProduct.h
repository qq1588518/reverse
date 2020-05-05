//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBProduct.h"

@class NSArray, NSDictionary, NSString;

@interface WBPhotoShopProduct : WBProduct
{
    _Bool _hasCoupon;
    _Bool _isProSelected;
    _Bool _isLiveItem;
    _Bool _isHistory;
    NSString *_itemid;
    NSString *_iid;
    NSString *_itemType;
    NSString *_itemUrl;
    NSString *_originalPrice;
    NSString *_sales;
    NSString *_commission;
    NSString *_commissionPrice;
    long long _visitCount;
    double _couponPrice;
    NSString *_eTime;
    NSString *_eTimeKey;
    NSArray *_urlImages;
    NSString *_showPrice;
    NSString *_showOriginalPrice;
    NSString *_showCommissionPrice;
    NSString *_showSales;
    NSDictionary *_actionLog;
    NSString *_scheme;
    NSString *_shareUrl;
    NSString *_containerid;
}

+ (_Bool)isValidForDictionary:(id)arg1;
@property(nonatomic) _Bool isHistory; // @synthesize isHistory=_isHistory;
@property(retain, nonatomic) NSString *containerid; // @synthesize containerid=_containerid;
@property(retain, nonatomic) NSString *shareUrl; // @synthesize shareUrl=_shareUrl;
@property(retain, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(retain, nonatomic) NSDictionary *actionLog; // @synthesize actionLog=_actionLog;
@property(retain, nonatomic) NSString *showSales; // @synthesize showSales=_showSales;
@property(retain, nonatomic) NSString *showCommissionPrice; // @synthesize showCommissionPrice=_showCommissionPrice;
@property(retain, nonatomic) NSString *showOriginalPrice; // @synthesize showOriginalPrice=_showOriginalPrice;
@property(retain, nonatomic) NSString *showPrice; // @synthesize showPrice=_showPrice;
@property(retain, nonatomic) NSArray *urlImages; // @synthesize urlImages=_urlImages;
@property(retain, nonatomic) NSString *eTimeKey; // @synthesize eTimeKey=_eTimeKey;
@property(retain, nonatomic) NSString *eTime; // @synthesize eTime=_eTime;
@property(nonatomic) _Bool isLiveItem; // @synthesize isLiveItem=_isLiveItem;
@property(nonatomic) _Bool isProSelected; // @synthesize isProSelected=_isProSelected;
@property(nonatomic) _Bool hasCoupon; // @synthesize hasCoupon=_hasCoupon;
@property(nonatomic) double couponPrice; // @synthesize couponPrice=_couponPrice;
@property(nonatomic) long long visitCount; // @synthesize visitCount=_visitCount;
@property(retain, nonatomic) NSString *commissionPrice; // @synthesize commissionPrice=_commissionPrice;
@property(retain, nonatomic) NSString *commission; // @synthesize commission=_commission;
@property(retain, nonatomic) NSString *sales; // @synthesize sales=_sales;
@property(retain, nonatomic) NSString *originalPrice; // @synthesize originalPrice=_originalPrice;
@property(retain, nonatomic) NSString *itemUrl; // @synthesize itemUrl=_itemUrl;
@property(retain, nonatomic) NSString *itemType; // @synthesize itemType=_itemType;
@property(retain, nonatomic) NSString *iid; // @synthesize iid=_iid;
@property(retain, nonatomic) NSString *itemid; // @synthesize itemid=_itemid;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)decimalNumberHandler;
- (id)dictionaryWithValues;
- (void)loadWindowDetailWith:(id)arg1;
- (_Bool)updateWithDictionary:(id)arg1;

// Remaining properties
@property(nonatomic) _Bool isDaogou;

@end

