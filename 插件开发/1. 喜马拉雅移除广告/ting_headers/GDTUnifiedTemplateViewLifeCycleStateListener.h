//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDTAdLifeEventListener-Protocol.h"

@class GDTUnifiedTemplateView, NSString;
@protocol GDTUnifiedTemplateViewDelegate;

@interface GDTUnifiedTemplateViewLifeCycleStateListener : NSObject <GDTAdLifeEventListener>
{
    id <GDTUnifiedTemplateViewDelegate> _delegate;
    GDTUnifiedTemplateView *_unifiedTemplateView;
}

@property(nonatomic) __weak GDTUnifiedTemplateView *unifiedTemplateView; // @synthesize unifiedTemplateView=_unifiedTemplateView;
@property(nonatomic) __weak id <GDTUnifiedTemplateViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showError:(unsigned long long)arg1 detailCode:(unsigned long long)arg2;
- (void)onEvent:(id)arg1;
- (id)initWithUnifiedTemplateView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

