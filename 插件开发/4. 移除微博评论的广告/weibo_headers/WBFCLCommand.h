//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBFeedCommand.h"

@class NSString, WBFCLContext;
@protocol WBFCLDataSource;

@interface WBFCLCommand : WBFeedCommand
{
    _Bool _isAsyncCommand;
    id <WBFCLDataSource> _dataSource;
    CDUnknownBlockType _disable;
    CDUnknownBlockType _enable;
    WBFCLContext *_context;
    NSString *_actionCode;
    id _trigger;
}

@property(nonatomic) __weak id trigger; // @synthesize trigger=_trigger;
@property(nonatomic) _Bool isAsyncCommand; // @synthesize isAsyncCommand=_isAsyncCommand;
@property(retain, nonatomic) NSString *actionCode; // @synthesize actionCode=_actionCode;
@property(retain, nonatomic) WBFCLContext *context; // @synthesize context=_context;
@property(copy, nonatomic) CDUnknownBlockType enable; // @synthesize enable=_enable;
@property(copy, nonatomic) CDUnknownBlockType disable; // @synthesize disable=_disable;
@property(nonatomic) __weak id <WBFCLDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)disablePrompt;
- (_Bool)shouldCheckBindPhone;
- (id)bindPhonePrompt;
- (_Bool)shouldCheckLogin;
- (id)unloginPrompt;
- (void)execute;

@end

