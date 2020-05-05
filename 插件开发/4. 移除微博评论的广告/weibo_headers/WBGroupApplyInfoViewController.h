//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBGroupEditInfoViewController.h"

#import "WBGroupEditInfoViewControllerDelegate-Protocol.h"

@class NSDictionary, NSString;

@interface WBGroupApplyInfoViewController : WBGroupEditInfoViewController <WBGroupEditInfoViewControllerDelegate>
{
    NSDictionary *_extraParameters;
    CDUnknownBlockType _completeBlock;
    NSString *_contentText;
}

@property(copy, nonatomic) NSString *contentText; // @synthesize contentText=_contentText;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(retain, nonatomic) NSDictionary *extraParameters; // @synthesize extraParameters=_extraParameters;
- (void).cxx_destruct;
- (void)dealloc;
- (void)WBGroupEditInfoViewController:(id)arg1 didPressRightNaviItem:(id)arg2;
- (void)cancelAction:(id)arg1;
- (void)hightlightString:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithGroupType:(int)arg1;
- (id)rightButtonTitle;
- (id)createEditViewAdapter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

