//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseCgi.h"

@protocol WCPayF2FDrawLotteryCgiDelegate;

@interface WCPayF2FDrawLotteryCgi : WCPayBaseCgi
{
    id <WCPayF2FDrawLotteryCgiDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)startRequestWithoutNotify:(id)arg1;
- (void)startRequest:(id)arg1;

@end

