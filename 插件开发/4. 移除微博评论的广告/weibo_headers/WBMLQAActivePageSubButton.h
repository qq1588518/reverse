//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBMLBaseModel.h"

@class NSString, WBMLQAActivePageCommonModel;

@interface WBMLQAActivePageSubButton : WBMLBaseModel
{
    long long _show_type;
    long long _is_sub;
    NSString *_text;
    NSString *_sub_url;
    NSString *_live_scheme;
    WBMLQAActivePageCommonModel *_live_action;
}

@property(retain, nonatomic) WBMLQAActivePageCommonModel *live_action; // @synthesize live_action=_live_action;
@property(copy, nonatomic) NSString *live_scheme; // @synthesize live_scheme=_live_scheme;
@property(copy, nonatomic) NSString *sub_url; // @synthesize sub_url=_sub_url;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) long long is_sub; // @synthesize is_sub=_is_sub;
@property(nonatomic) long long show_type; // @synthesize show_type=_show_type;
- (void).cxx_destruct;

@end

