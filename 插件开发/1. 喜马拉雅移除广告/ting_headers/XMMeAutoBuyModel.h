//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMBase/XMModel.h>

#import "XMTableCellModelProtocol-Protocol.h"

@class NSString, NSURL;

@interface XMMeAutoBuyModel : XMModel <XMTableCellModelProtocol>
{
    _Bool _autoBuy;
    NSURL *_coverUrl;
    NSString *_albumName;
    unsigned long long _albumId;
}

@property(nonatomic) _Bool autoBuy; // @synthesize autoBuy=_autoBuy;
@property(nonatomic) unsigned long long albumId; // @synthesize albumId=_albumId;
@property(copy, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(retain, nonatomic) NSURL *coverUrl; // @synthesize coverUrl=_coverUrl;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

