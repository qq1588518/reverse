//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMImageGridView.h"

@class NSString;
@protocol EmoticonStoreGridViewDelegate;

@interface EmoticonStoreGridView : MMImageGridView
{
    NSString *m_emoticonPid;
    long long m_currentSelectIndex;
    id <EmoticonStoreGridViewDelegate> _delegate;
}

@property(nonatomic) __weak id <EmoticonStoreGridViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long m_currentSelectIndex; // @synthesize m_currentSelectIndex;
@property(retain, nonatomic) NSString *m_emoticonPid; // @synthesize m_emoticonPid;
- (void).cxx_destruct;
- (_Bool)isPoint:(struct CGPoint)arg1 inView:(id)arg2;
- (void)loadPreViewAtIndex:(long long)arg1;
- (id)showPreviewAtIndex:(long long)arg1;
- (long long)getRealIndexFromPoint:(struct CGPoint)arg1;
- (void)handleLongPress:(id)arg1;
- (void)handleTap:(id)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

