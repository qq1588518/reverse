//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSMutableArray, UIButton, UIImageView, UILabel, UIView, XMHomePagePerson, XMOMoreButton;

@interface XMHomePagePhotographyCell : UITableViewCell
{
    CDUnknownBlockType _didClickAddButton;
    CDUnknownBlockType _didClickPhoto;
    CDUnknownBlockType _didClickMoreButton;
    UILabel *_titleLabel;
    UILabel *_countLabel;
    UIView *_backView;
    UIView *_photoBackView;
    UIView *_noDataBackView;
    UIImageView *_noDataImageView;
    UILabel *_noDataLabel;
    UIButton *_addButton;
    XMOMoreButton *_moreButton;
    XMHomePagePerson *_homepagePerson;
    NSMutableArray *_photoArr;
}

+ (double)cellHeight;
+ (double)viewHeight;
@property(retain, nonatomic) NSMutableArray *photoArr; // @synthesize photoArr=_photoArr;
@property(retain, nonatomic) XMHomePagePerson *homepagePerson; // @synthesize homepagePerson=_homepagePerson;
@property(retain, nonatomic) XMOMoreButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UIButton *addButton; // @synthesize addButton=_addButton;
@property(retain, nonatomic) UILabel *noDataLabel; // @synthesize noDataLabel=_noDataLabel;
@property(retain, nonatomic) UIImageView *noDataImageView; // @synthesize noDataImageView=_noDataImageView;
@property(retain, nonatomic) UIView *noDataBackView; // @synthesize noDataBackView=_noDataBackView;
@property(retain, nonatomic) UIView *photoBackView; // @synthesize photoBackView=_photoBackView;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType didClickMoreButton; // @synthesize didClickMoreButton=_didClickMoreButton;
@property(copy, nonatomic) CDUnknownBlockType didClickPhoto; // @synthesize didClickPhoto=_didClickPhoto;
@property(copy, nonatomic) CDUnknownBlockType didClickAddButton; // @synthesize didClickAddButton=_didClickAddButton;
- (void).cxx_destruct;
- (void)setDataSource:(id)arg1;
- (void)didClickWebIV:(id)arg1;
- (void)addBtnTouch:(id)arg1;
- (void)moreBtnClick:(id)arg1;
- (void)p_makeConstraints;
- (void)p_setUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

