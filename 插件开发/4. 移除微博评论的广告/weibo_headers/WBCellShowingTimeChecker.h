//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexPath, NSTimer, UITableView, UIViewController;
@protocol WBCellShowingTimeCheckerDelegate;

@interface WBCellShowingTimeChecker : NSObject
{
    NSIndexPath *currentShowingCellIndexPath;
    double startTime;
    NSTimer *nextCheckTimer;
    double _eventTriggerTime;
    id <WBCellShowingTimeCheckerDelegate> _delegate;
    UITableView *_tableView;
    UIViewController *_owner;
    long long _retryTimesWhenEmpty;
    struct CGPoint _showingCellCheckPoint;
}

+ (id)serverConfigTriggerTime;
+ (void)setServerConfigTriggerTime:(id)arg1;
@property(nonatomic) long long retryTimesWhenEmpty; // @synthesize retryTimesWhenEmpty=_retryTimesWhenEmpty;
@property(nonatomic) __weak UIViewController *owner; // @synthesize owner=_owner;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <WBCellShowingTimeCheckerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double eventTriggerTime; // @synthesize eventTriggerTime=_eventTriggerTime;
@property(nonatomic) struct CGPoint showingCellCheckPoint; // @synthesize showingCellCheckPoint=_showingCellCheckPoint;
- (void).cxx_destruct;
- (void)resetShowingCellTimeData;
- (void)triggerShowingCellTimeCheck;
- (void)triggerShowingCellTimeCheck:(_Bool)arg1;
- (id)init;

@end

