//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NvsObject.h"

@class NvsFxDescription;

@interface NvsFx : NvsObject
{
}

- (id)getARSceneManipulate;
- (id)getPaintingEffectContext;
- (id)getARFaceContext;
- (id)getParticleSystemContext;
- (float)getFilterIntensity;
- (void)setFilterIntensity:(float)arg1;
- (id)getMenuVal:(id)arg1;
- (void)setMenuVal:(id)arg1 val:(id)arg2;
- (CDStruct_869f9c67)getPosition3DVal:(id)arg1;
- (void)setPosition3DVal:(id)arg1 val:(CDStruct_869f9c67 *)arg2;
- (CDStruct_b2fbf00d)getPosition2DVal:(id)arg1;
- (void)setPosition2DVal:(id)arg1 val:(CDStruct_b2fbf00d *)arg2;
- (CDStruct_426b4421)getColorVal:(id)arg1;
- (void)setColorVal:(id)arg1 val:(CDStruct_426b4421 *)arg2;
- (id)getStringVal:(id)arg1;
- (void)setStringVal:(id)arg1 val:(id)arg2;
- (_Bool)getBooleanVal:(id)arg1;
- (void)setBooleanVal:(id)arg1 val:(_Bool)arg2;
- (double)getFloatVal:(id)arg1;
- (void)setFloatVal:(id)arg1 val:(double)arg2;
- (int)getIntVal:(id)arg1;
- (void)setIntVal:(id)arg1 val:(int)arg2;
@property(readonly) NvsFxDescription *description;
-     // Error parsing type: ^{CNvAppFxInstance=^^?{atomic<int>=Ai}^{CNvAppFxDesc}^{CNvAssetPackageManager}BBq{TNvSmartPtr<INvEffectContext>=^{INvEffectContext}}{unordered_map<CNvByteArray, std::__1::pair<int, SNvFxParamVal>, std::__1::hash<CNvByteArray>, std::__1::equal_to<CNvByteArray>, std::__1::allocator<std::__1::pair<const CNvByteArray, std::__1::pair<int, SNvFxParamVal> > > >={__hash_table<std::__1::__hash_value_type<CNvByteArray, std::__1::pair<int, SNvFxParamVal> >, std::__1::__unordered_map_hasher<CNvByteArray, std::__1::__hash_value_type<CNvByteArray, std::__1::pair<int, SNvFxParamVal> >, std::__1::hash<CNvByteArray>, true>, std::__1::__unordered_map_equal<CNvByteArray, std::__1::__hash_value_type<CNvByteArray, std::__1::pair<int, SNvFxParamVal> >, std::__1::equal_to<CNvByteArray>, true>, std::__1::allocator<std::__1::__hash_value_type<CNvByteArray, std::__1::pair<int, SNvFxParamVal> > > >={unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CNvByteArray, std::__1::pair<int, SNvFxParamVal> >, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CNvByteArray, std::__1::pair<int, SNvFxParamVal> >, void *> *> *> > >={__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CNvByteArray, std::__1::pair<int, SNvFxParamVal> >, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CNvByteArray, std::__1::pair<int, SNvFxParamVal> >, void *> *> *> > >=^^{__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CNvByteArray, std::__1::pair<int, SNvFxParamVal> >, void *> *>}{__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CNvByteArray, std::__1::pair<int, SNvFxParamVal> >, void *> *> *> >={__compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CNvByteArray, std::__1::pair<int, SNvFxParamVal> >, void *> *> *> >=Q}}}}{__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CNvByteArray, std::__1::pair<int, SNvFxParamVal> >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<CNvByteArray, std::__1::pair<int, SNvFxParamVal> >, void *> > >={__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CNvByteArray, std::__1::pair<int, SNvFxParamVal> >, void *> *>=^{__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CNvByteArray, std::__1::pair<int, SNvFxParamVal> >, void *> *>}}}{__compressed_pair<unsigned long, std::__1::__unordered_map_hasher<CNvByteArray, std::__1::__hash_value_type<CNvByteArray, std::__1::pair<int, SNvFxParamVal> >, std::__1::hash<CNvByteArray>, true> >=Q}{__compressed_pair<float, std::__1::__unordered_map_equal<CNvByteArray, std::__1::__hash_value_type<CNvByteArray, std::__1::pair<int, SNvFxParamVal> >, std::__1::equal_to<CNvByteArray>, true> >=f}}}{unordered_map<CNvByteArray, std::__1::pair<int, void *>, std::__1::hash<CNvByteArray>, std::__1::equal_to<CNvByteArray>, std::__1::allocator<std::__1::pair<const CNvByteArray, std::__1::pair<int, void *> > > >={__hash_table<std::__1::__hash_value_type<CNvByteArray, std::__1::pair<int, void *> >, std::__1::__unordered_map_hasher<CNvByteArray, std::__1::__hash_value_type<CNvByteArray, std::__1::pair<int, void *> >, std::__1::hash<CNvByteArray>, true>, std::__1::__unordered_map_equal<CNvByteArray, std::__1::__hash_value_type<CNvByteArray, std::__1::pair<int, void *> >, std::__1::equal_to<CNvByteArray>, true>, std::__1::allocator<std::__1::__hash_value_type<CNvByteArray, std::__1::pair<int, void *> > > >={unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CNvByteArray, std::__1::pair<int, void *> >, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CNvByteArray, std::__1::pair<int, void *> >, void *> *> *> > >={__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CNvByteArray, std::__1::pair<int, void *> >, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CNvByteArray, std::__1::pair<int, void *> >, void *> *> *> > >=^^{__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CNvByteArray, std::__1::pair<int, void *> >, void *> *>}{__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CNvByteArray, std::__1::pair<int, void *> >, void *> *> *> >={__compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CNvByteArray, std::__1::pair<int, void *> >, void *> *> *> >=Q}}}}{__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CNvByteArray, std::__1::pair<int, void *> >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<CNvByteArray, std::__1::pair<int, void *> >, void *> > >={__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CNvByteArray, std::__1::pair<int, void *> >, void *> *>=^{__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CNvByteArray, std::__1::pair<int, void *> >, void *> *>}}}{__compressed_pair<unsigned long, std::__1::__unordered_map_hasher<CNvByteArray, std::__1::__hash_value_type<CNvByteArray, std::__1::pair<int, void *> >, std::__1::hash<CNvByteArray>, true> >=Q}{__compressed_pair<float, std::__1::__unordered_map_equal<CNvByteArray, std::__1::__hash_value_type<CNvByteArray, std::__1::pair<int, void *> >, std::__1::equal_to<CNvByteArray>, true> >=f}}}{unordered_map<CNvByteArray, std::__1::pair<CNvString, unsigned int>, std::__1::hash<CNvByteArray>, std::__1::equal_to<CNvByteArray>, std::__1::allocator<std::__1::pair<const CNvByteArray, std::__1::pair<CNvString, unsigned int> > > >={__hash_table<std::__1::__hash_value_type<CNvByteArray, std::__1::pair<CNvString, unsigned int> >, std::__1::__unordered_map_hasher<CNvByteArray, std::__1::__hash_value_type<CNvByteArray, std::__1::pair<CNvString, unsigned int> >, std::__1::hash<CNvByteArray>, true>, std::__1::__unordered_map_equal<CNvByteArray, std::__1::__hash_value_type<CNvByteArray, std::__1::pair<CNvString, unsigned int> >, std::__1::equal_to<CNvByteArray>, true>, std::__1::allocator<std::__1::__hash_value_type<CNvByteArray, std::__1::pair<CNvString, unsigned int> > > >={unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CNvByteArray, std::__1::pair<CNvString, unsigned int> >, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CNvByteArray, std::__1::pair<CNvString, unsigned int> >, void *> *> *> > >={__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CNvByteArray, std::__1::pair<CNvString, unsigned int> >, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CNvByteArray, std::__1::pair<CNvString, unsigned int> >, void *> *> *> > >=^^{__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CNvByteArray, std::__1::pair<CNvString, unsigned int> >, void *> *>}{__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CNvByteArray, std::__1::pair<CNvString, unsigned int> >, void *> *> *> >={__compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CNvByteArray, std::__1::pair<CNvString, unsigned int> >, void *> *> *> >=Q}}}}{__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CNvByteArray, std::__1::pair<CNvString, unsigned int> >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<CNvByteArray, std::__1::pair<CNvString, unsigned int> >, void *> > >={__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CNvByteArray, std::__1::pair<CNvString, unsigned int> >, void *> *>=^{__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CNvByteArray, std::__1::pair<CNvString, unsigned int> >, void *> *>}}}{__compressed_pair<unsigned long, std::__1::__unordered_map_hasher<CNvByteArray, std::__1::__hash_value_type<CNvByteArray, std::__1::pair<CNvString, unsigned int> >, std::__1::hash<CNvByteArray>, true> >=Q}{__compressed_pair<float, std::__1::__unordered_map_equal<CNvByteArray, std::__1::__hash_value_type<CNvByteArray, std::__1::pair<CNvString, unsigned int> >, std::__1::equal_to<CNvByteArray>, true> >=f}}}fB{vector<float, std::__1::allocator<float> >=^f^f{__compressed_pair<float *, std::__1::allocator<float> >=^f}}f{CNvReadWriteLock={_opaque_pthread_rwlock_t=q[192c]}}}16@0:8, name: getAppFxInstance

@end

