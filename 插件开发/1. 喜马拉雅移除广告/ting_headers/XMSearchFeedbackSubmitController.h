//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMSubLevelViewController.h"

#import "YYTextViewDelegate-Protocol.h"

@class NSString, UIButton, UILabel, XMNRequest, YYTextView;

@interface XMSearchFeedbackSubmitController : XMSubLevelViewController <YYTextViewDelegate>
{
    NSString *_searchWord;
    long long _typeId;
    NSString *_typeName;
    UILabel *_typeNameLabel;
    YYTextView *_textView;
    UIButton *_commitButton;
    XMNRequest *_req;
}

@property(retain, nonatomic) XMNRequest *req; // @synthesize req=_req;
@property(retain, nonatomic) UIButton *commitButton; // @synthesize commitButton=_commitButton;
@property(retain, nonatomic) YYTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UILabel *typeNameLabel; // @synthesize typeNameLabel=_typeNameLabel;
@property(copy, nonatomic) NSString *typeName; // @synthesize typeName=_typeName;
@property(nonatomic) long long typeId; // @synthesize typeId=_typeId;
@property(copy, nonatomic) NSString *searchWord; // @synthesize searchWord=_searchWord;
- (void).cxx_destruct;
- (void)textViewDidChange:(id)arg1;
- (void)commitButtonDidClick;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)viewDidLoad;
- (id)initWithSearchWord:(id)arg1 typeId:(long long)arg2 typeName:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

