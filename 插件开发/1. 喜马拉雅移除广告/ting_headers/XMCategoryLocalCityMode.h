//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface XMCategoryLocalCityMode : NSObject <NSCoding>
{
    NSString *_cityCode;
    NSString *_cityName;
    NSString *_cityTitle;
    NSString *_pinyin;
    NSString *_fullPinyin;
    NSString *_jianpin;
    NSString *_countyCode;
}

+ (id)getLocalCityMode;
+ (void)saveLocalSelectedCity:(id)arg1;
@property(retain, nonatomic) NSString *countyCode; // @synthesize countyCode=_countyCode;
@property(retain, nonatomic) NSString *jianpin; // @synthesize jianpin=_jianpin;
@property(retain, nonatomic) NSString *fullPinyin; // @synthesize fullPinyin=_fullPinyin;
@property(retain, nonatomic) NSString *pinyin; // @synthesize pinyin=_pinyin;
@property(retain, nonatomic) NSString *cityTitle; // @synthesize cityTitle=_cityTitle;
@property(retain, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(retain, nonatomic) NSString *cityCode; // @synthesize cityCode=_cityCode;
- (void).cxx_destruct;
- (void)updateCityModeWithDic:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

