//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBVideoEventAnnouncer.h"

#import "WBArSessionStateListener-Protocol.h"

@class NSString;

@interface WBArSessionStateAnnouncer : WBVideoEventAnnouncer <WBArSessionStateListener>
{
}

- (void)arSeesion:(id)arg1 didChangeTrackingState:(unsigned long long)arg2;
- (void)arSeesion:(id)arg1 didTransitionFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)arSeesion:(id)arg1 didFinishWithMediaCache:(id)arg2;
- (void)arSeesion:(id)arg1 didFailWithError:(id)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

