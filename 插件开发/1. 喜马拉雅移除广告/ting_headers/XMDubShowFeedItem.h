//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMBase/XMModel.h>

@class NSString;

@interface XMDubShowFeedItem : XMModel
{
    unsigned long long _contentId;
    NSString *_contentType;
    NSString *_recReason;
    NSString *_recReasonTwo;
    NSString *_recSrc;
    NSString *_recTrack;
}

@property(retain, nonatomic) NSString *recTrack; // @synthesize recTrack=_recTrack;
@property(retain, nonatomic) NSString *recSrc; // @synthesize recSrc=_recSrc;
@property(retain, nonatomic) NSString *recReasonTwo; // @synthesize recReasonTwo=_recReasonTwo;
@property(retain, nonatomic) NSString *recReason; // @synthesize recReason=_recReason;
@property(retain, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(nonatomic) unsigned long long contentId; // @synthesize contentId=_contentId;
- (void).cxx_destruct;

@end

