//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMBase/XMModel.h>

@class NSMutableSet, NSString;

@interface XMHAPIModel : XMModel
{
    NSString *_appId;
    NSString *_domain;
    NSMutableSet *_apiSet;
}

@property(retain, nonatomic) NSMutableSet *apiSet; // @synthesize apiSet=_apiSet;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;
- (unsigned long long)validAbilityWithAppId:(id)arg1 domain:(id)arg2 api:(id)arg3;
- (id)init;

@end

