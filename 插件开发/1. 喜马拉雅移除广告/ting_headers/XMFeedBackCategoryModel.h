//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMBase/XMModel.h>

@class NSArray, NSString;

@interface XMFeedBackCategoryModel : XMModel
{
    NSString *_Id;
    NSString *_title;
    NSArray *_questionList;
    NSString *_color;
    NSString *_url;
}

+ (id)xmm_modelContainerPropertyGenericClass;
+ (id)xmm_modelCustomPropertyMapper;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *color; // @synthesize color=_color;
@property(retain, nonatomic) NSArray *questionList; // @synthesize questionList=_questionList;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *Id; // @synthesize Id=_Id;
- (void).cxx_destruct;

@end

