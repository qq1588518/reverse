//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface WBVideoPlayerItemPlaybackLogErrorEvent : NSObject
{
    NSDate *_date;
    long long _errorStatusCode;
    NSString *_errorDomain;
    NSString *_errorComment;
}

@property(copy, nonatomic) NSString *errorComment; // @synthesize errorComment=_errorComment;
@property(copy, nonatomic) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
@property(nonatomic) long long errorStatusCode; // @synthesize errorStatusCode=_errorStatusCode;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithErrorDomain:(id)arg1 code:(long long)arg2 comment:(id)arg3 date:(id)arg4;

@end

