//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface WBViewPreset : NSObject
{
    NSMutableDictionary *_presetParaDict;
}

+ (double)floatForKey:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *presetParaDict; // @synthesize presetParaDict=_presetParaDict;
- (void).cxx_destruct;
- (id)configNameWithType:(unsigned long long)arg1;
- (id)init;

@end

