//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface WBMLQAActivePageAnalysisManager : NSObject
{
    NSString *_lfid;
    NSString *_luicode;
    NSMutableDictionary *_analysisParameters;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSMutableDictionary *analysisParameters; // @synthesize analysisParameters=_analysisParameters;
@property(copy, nonatomic) NSString *luicode; // @synthesize luicode=_luicode;
@property(copy, nonatomic) NSString *lfid; // @synthesize lfid=_lfid;
- (void).cxx_destruct;
- (void)activePageActionAnalysisWithType:(id)arg1;

@end

