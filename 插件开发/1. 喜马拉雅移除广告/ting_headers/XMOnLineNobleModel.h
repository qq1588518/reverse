//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMBase/XMModel.h>

@class NSString;

@interface XMOnLineNobleModel : XMModel
{
    long long _uid;
    NSString *_avatar;
    NSString *_nickname;
    NSString *_nobleIcon;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *nobleIcon; // @synthesize nobleIcon=_nobleIcon;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(nonatomic) long long uid; // @synthesize uid=_uid;

@end

