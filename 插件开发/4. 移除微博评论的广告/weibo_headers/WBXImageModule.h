//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBXAbstractModule.h"

#import "WBALAssetPickerContextManagerDelegate-Protocol.h"

@class NSString, WBALAssetPickerContextManager;

@interface WBXImageModule : WBXAbstractModule <WBALAssetPickerContextManagerDelegate>
{
    WBALAssetPickerContextManager *_pickerManager;
    CDUnknownBlockType _callback;
    unsigned long long _sizeType;
}

+ (id)imageDealQueue;
+ (id)parseAndPressImage:(id)arg1 imageQuality:(_Bool)arg2;
+ (id)wx_export_method_44;
@property(nonatomic) unsigned long long sizeType; // @synthesize sizeType=_sizeType;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) WBALAssetPickerContextManager *pickerManager; // @synthesize pickerManager=_pickerManager;
- (void).cxx_destruct;
- (id)needSendAttachments:(id)arg1;
- (id)imageTempPath;
- (id)getImageFilename:(long long)arg1 imageNumber:(int)arg2;
- (id)topMostController;
- (void)didFinishPickerImages:(id)arg1 progressView:(id)arg2 photoQuality:(_Bool)arg3;
- (void)WBALAssetPickerContextManagerCanceled:(id)arg1;
- (void)WBALAssetPickerContextManager:(id)arg1 finishedPickImageAttachments:(id)arg2;
- (void)takePhoto;
- (void)chooseImage:(id)arg1 app:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)chooseImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

