//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableDictionary.h>

@interface WBDNSMemeryCache : NSMutableDictionary
{
    NSMutableDictionary *_dic;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)getExpireDnsCache;
- (id)findIp:(id)arg1 inIPArray:(id)arg2;
- (void)updateModel:(id)arg1 keyUrl:(id)arg2;
- (void)addModel:(id)arg1 keyUrl:(id)arg2;
- (id)getAllModels;
- (void)removeAllModels;
- (id)getModelByKeyUrl:(id)arg1;
- (id)init;

@end

