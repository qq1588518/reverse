//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMLiveRoomBaseMsgCell.h"

@class YYLabel;

@interface XMLiveRoomTxtMsgCell : XMLiveRoomBaseMsgCell
{
    YYLabel *_msgContentLabel;
}

+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) YYLabel *msgContentLabel; // @synthesize msgContentLabel=_msgContentLabel;
- (void)prepareForReuse;
- (void)configWithMsgLayout:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

