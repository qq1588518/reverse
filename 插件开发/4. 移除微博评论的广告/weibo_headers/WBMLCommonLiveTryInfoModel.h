//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBMLBaseModel.h"

@class NSString, WBMLCommonLiveCloseWindowModel;

@interface WBMLCommonLiveTryInfoModel : WBMLBaseModel
{
    NSString *_title;
    NSString *_content;
    NSString *_target_url;
    NSString *_try_time;
    NSString *_btn_text;
    NSString *_from;
    WBMLCommonLiveCloseWindowModel *_close_window;
    NSString *_win_text;
}

@property(copy, nonatomic) NSString *win_text; // @synthesize win_text=_win_text;
@property(copy, nonatomic) WBMLCommonLiveCloseWindowModel *close_window; // @synthesize close_window=_close_window;
@property(copy, nonatomic) NSString *from; // @synthesize from=_from;
@property(copy, nonatomic) NSString *btn_text; // @synthesize btn_text=_btn_text;
@property(copy, nonatomic) NSString *try_time; // @synthesize try_time=_try_time;
@property(copy, nonatomic) NSString *target_url; // @synthesize target_url=_target_url;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

