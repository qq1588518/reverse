//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WBMessageSettingTableViewAdapterProtocol-Protocol.h"

@class NSString, WBCustomSwitchControl;
@protocol WBMessageSettingConfigProtocol, WBMessageSettingEventHandlerProtocol;

@interface WBMessageSettingAdapter : NSObject <WBMessageSettingTableViewAdapterProtocol>
{
    WBCustomSwitchControl *_enableSwitch;
    id <WBMessageSettingConfigProtocol> _configer;
    id <WBMessageSettingEventHandlerProtocol> _eventHandler;
}

@property(nonatomic) __weak id <WBMessageSettingEventHandlerProtocol> eventHandler; // @synthesize eventHandler=_eventHandler;
@property(retain, nonatomic) id <WBMessageSettingConfigProtocol> configer; // @synthesize configer=_configer;
@property(retain, nonatomic) WBCustomSwitchControl *enableSwitch; // @synthesize enableSwitch=_enableSwitch;
- (void).cxx_destruct;
- (double)heightWithText:(id)arg1 isHeader:(_Bool)arg2;
- (_Bool)isTwoLineContent:(id)arg1 isHeader:(_Bool)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableFooterViewWithText:(id)arg1;
- (id)textForFooterInSection:(long long)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableHeaderViewWithText:(id)arg1;
- (id)textForHeaderInSection:(long long)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)enableSwitchAction:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

