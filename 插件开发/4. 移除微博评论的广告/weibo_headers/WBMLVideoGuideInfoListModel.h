//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBMLBaseModel.h"

@class WBMLVideoGuideInfoModel;

@interface WBMLVideoGuideInfoListModel : WBMLBaseModel
{
    WBMLVideoGuideInfoModel *_comment;
    WBMLVideoGuideInfoModel *_share;
}

@property(retain, nonatomic) WBMLVideoGuideInfoModel *share; // @synthesize share=_share;
@property(retain, nonatomic) WBMLVideoGuideInfoModel *comment; // @synthesize comment=_comment;
- (void).cxx_destruct;

@end

