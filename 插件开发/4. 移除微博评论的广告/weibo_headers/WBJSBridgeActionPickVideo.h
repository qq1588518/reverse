//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBJSBridgeAction.h"

#import "WBALAssetPickerContextManagerDelegate-Protocol.h"

@class NSString, WBALAssetPickerContextManager;

@interface WBJSBridgeActionPickVideo : WBJSBridgeAction <WBALAssetPickerContextManagerDelegate>
{
    WBALAssetPickerContextManager *_pickerManager;
}

@property(retain, nonatomic) WBALAssetPickerContextManager *pickerManager; // @synthesize pickerManager=_pickerManager;
- (void).cxx_destruct;
- (void)WBALAssetPickerContextManagerCanceled:(id)arg1;
- (void)WBALAssetPickerContextManager:(id)arg1 finishedPickImageAttachments:(id)arg2;
- (void)startAction;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

