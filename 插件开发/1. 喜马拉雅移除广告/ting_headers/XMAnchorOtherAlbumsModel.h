//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMBase/XMModel.h>

@class NSArray, NSString;

@interface XMAnchorOtherAlbumsModel : XMModel
{
    _Bool _isShowMoreButton;
    NSArray *_albums;
    NSString *_albumSetName;
}

+ (id)xmm_modelContainerPropertyGenericClass;
+ (id)xmm_modelCustomPropertyMapper;
@property(retain, nonatomic) NSString *albumSetName; // @synthesize albumSetName=_albumSetName;
@property(nonatomic) _Bool isShowMoreButton; // @synthesize isShowMoreButton=_isShowMoreButton;
@property(retain, nonatomic) NSArray *albums; // @synthesize albums=_albums;
- (void).cxx_destruct;

@end

