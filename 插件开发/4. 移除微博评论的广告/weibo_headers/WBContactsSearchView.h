//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UIImageView, WBStartGroupChatSearchField;
@protocol WBContactsSearchViewDelegate;

@interface WBContactsSearchView : UIView <UITextFieldDelegate>
{
    _Bool _isLastCellPendingToDelete;
    id <WBContactsSearchViewDelegate> _delegate;
    WBStartGroupChatSearchField *_searchField;
    UIImageView *_backgroundView;
    UIImageView *_separatorView;
    NSString *_lastQString;
}

@property(copy, nonatomic) NSString *lastQString; // @synthesize lastQString=_lastQString;
@property(retain, nonatomic) UIImageView *separatorView; // @synthesize separatorView=_separatorView;
@property(nonatomic) _Bool isLastCellPendingToDelete; // @synthesize isLastCellPendingToDelete=_isLastCellPendingToDelete;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) WBStartGroupChatSearchField *searchField; // @synthesize searchField=_searchField;
@property(nonatomic) __weak id <WBContactsSearchViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)searchFieldDidBeginEditing:(id)arg1;
- (void)tapBackgroundView:(id)arg1;
- (void)clearSearchField;
- (void)dismissKeyboard;
- (void)configData;
- (void)layoutSubviews;
- (void)configUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

