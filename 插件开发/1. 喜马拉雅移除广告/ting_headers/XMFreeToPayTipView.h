//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseAlert.h"

@class XMAlbumItem;

@interface XMFreeToPayTipView : XMBaseAlert
{
    XMAlbumItem *_item;
    CDUnknownBlockType _buttonDidClick;
}

+ (void)requestActiveAblumWithAlbumId:(unsigned long long)arg1 withComplete:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType buttonDidClick; // @synthesize buttonDidClick=_buttonDidClick;
@property(retain, nonatomic) XMAlbumItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)buttonClick:(id)arg1;
- (void)initUI;

@end

