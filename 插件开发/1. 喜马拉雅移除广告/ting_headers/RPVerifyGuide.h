//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface RPVerifyGuide : NSObject
{
    _Bool _needStatusPage;
    _Bool _needLogin;
    _Bool _needQueryPage;
    _Bool _useOCR;
    _Bool _globalVerifyLimit;
    NSString *_biz;
    NSString *_source;
    NSArray *_steps;
    NSDictionary *_globalParam;
}

+ (id)moduleWithLimitStatus;
+ (id)moduleWithStartResult:(id)arg1;
@property(nonatomic) _Bool globalVerifyLimit; // @synthesize globalVerifyLimit=_globalVerifyLimit;
@property(retain, nonatomic) NSDictionary *globalParam; // @synthesize globalParam=_globalParam;
@property(retain, nonatomic) NSArray *steps; // @synthesize steps=_steps;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *biz; // @synthesize biz=_biz;
@property(nonatomic) _Bool useOCR; // @synthesize useOCR=_useOCR;
@property(nonatomic) _Bool needQueryPage; // @synthesize needQueryPage=_needQueryPage;
@property(nonatomic) _Bool needLogin; // @synthesize needLogin=_needLogin;
@property(nonatomic) _Bool needStatusPage; // @synthesize needStatusPage=_needStatusPage;
- (void).cxx_destruct;
- (id)init;

@end

