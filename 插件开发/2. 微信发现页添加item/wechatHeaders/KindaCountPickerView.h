//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KindaView.h"

#import "MMKCountPickerView-Protocol.h"
#import "WCBaseInfoItemDelegate-Protocol.h"

@class MMKCountPickerViewOnSelectCallback, NSString, WCPaySelectCountItem;

@interface KindaCountPickerView : KindaView <WCBaseInfoItemDelegate, MMKCountPickerView>
{
    WCPaySelectCountItem *_countItem;
    MMKCountPickerViewOnSelectCallback *_callback;
}

@property(retain, nonatomic) MMKCountPickerViewOnSelectCallback *callback; // @synthesize callback=_callback;
@property(retain, nonatomic) WCPaySelectCountItem *countItem; // @synthesize countItem=_countItem;
- (void).cxx_destruct;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (void)setDefaultCount:(int)arg1;
- (void)setOnSelectCallback:(id)arg1;
- (id)getValue;
- (void)setValue:(id)arg1;
- (_Bool)getFocus;
- (void)setFocus:(_Bool)arg1;
- (id)getView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

