//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBMLURLRequest.h"

@class NSString;

@interface WBMLQAActivePageHomeDataRequest : WBMLURLRequest
{
    NSString *_login_uid;
    NSString *_share_uid;
    NSString *_invite_code;
    NSString *_king_source;
    NSString *_ext;
}

@property(copy, nonatomic) NSString *ext; // @synthesize ext=_ext;
@property(copy, nonatomic) NSString *king_source; // @synthesize king_source=_king_source;
@property(copy, nonatomic) NSString *invite_code; // @synthesize invite_code=_invite_code;
@property(copy, nonatomic) NSString *share_uid; // @synthesize share_uid=_share_uid;
@property(copy, nonatomic) NSString *login_uid; // @synthesize login_uid=_login_uid;
- (void).cxx_destruct;
- (id)path;
- (id)parseResponseData:(id)arg1;

@end

