#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class DSDKNDAppBeaconAPI, DSDKNDAuthAPI, DSDKNDError, DSDKNDCoachingAPI, DSDKEither<__covariant L, __covariant R>, DSDKNDEventAccessAPI, DSDKNDEventsAPI, DSDKNDGreenzoneAPI, DSDKNDUserAPI, DSDKNDVideoAPI, DSDKEitherLeft<__covariant L>, DSDKKotlinNothing, DSDKEitherRight<__covariant R>, DSDKDriverScoreWithRank, DSDKDrivingStats, DSDKHighImpactEvent, DSDKNDStatsInterval, DSDKNDLeaderboard, DSDKNDGreenzoneStats, DSDKSSOStatus, DSDKSSOStatusResponse, DSDKNDAPIResponse, DSDKAlertTypeCount, DSDKDriverStarSubtypeCount, DSDKEventDateFilter, DSDKEventGroupType, DSDKEventGroupTypes, DSDKEventSubType, DSDKLatLong, DSDKNDAvailableEventTypes, DSDKNDEvent, DSDKNDEventComment, DSDKNDEventData, DSDKNDVideo, DSDKNDEventDetail, DSDKNDFeedbackCategory, DSDKNDFeedbackConversation, DSDKNDFeedbackState, DSDKNDEventFeedback, DSDKMarkVCCompleteRequest, DSDKNDWeeklyReviewSession, DSDKNDWeeklyReviewSessionDetail, DSDKNDCommentNotification, DSDKNDDriverReportNotification, DSDKNDEventAccessNotification, DSDKNDEventNotification, DSDKNDFeedbackSharedNotification, DSDKNDNotification, DSDKNDWeeklyReviewNotification, DSDKNDNotificationMessage, DSDKNDNotifications, DSDKNDTrimmedVideoNotification, DSDKNDEventAccessDetail, DSDKNDEventAccessRequest, DSDKNDVideoData, DSDKNDVideoEvent, DSDKNDFeedbackType, DSDKNDFeature, DSDKNDAppFeedback, DSDKKotlinEnum<E>, DSDKKotlinArray<T>, DSDKDATA_RETENTION_ERROR_MSG, DSDKNDUser, DSDKNDVODConsumption, DSDKNDAPIClient, DSDKNDNotificationsAPI, DSDKKotlinx_serialization_coreSerializersModule, DSDKKotlinx_serialization_coreSerialKind;

@protocol DSDKKotlinx_serialization_coreKSerializer, DSDKKotlinx_serialization_coreEncoder, DSDKKotlinx_serialization_coreSerialDescriptor, DSDKKotlinx_serialization_coreSerializationStrategy, DSDKKotlinx_serialization_coreDecoder, DSDKKotlinx_serialization_coreDeserializationStrategy, DSDKKotlinComparable, DSDKKotlinx_serialization_coreCompositeEncoder, DSDKKotlinAnnotation, DSDKKotlinx_serialization_coreCompositeDecoder, DSDKKotlinIterator, DSDKKotlinx_serialization_coreSerializersModuleCollector, DSDKKotlinKClass, DSDKKotlinKDeclarationContainer, DSDKKotlinKAnnotatedElement, DSDKKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

__attribute__((swift_name("KotlinBase")))
@interface DSDKBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface DSDKBase (DSDKBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface DSDKMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface DSDKMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorDSDKKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface DSDKNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface DSDKByte : DSDKNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface DSDKUByte : DSDKNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface DSDKShort : DSDKNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface DSDKUShort : DSDKNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface DSDKInt : DSDKNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface DSDKUInt : DSDKNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface DSDKLong : DSDKNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface DSDKULong : DSDKNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface DSDKFloat : DSDKNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface DSDKDouble : DSDKNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface DSDKBoolean : DSDKNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DriveriSDK")))
@interface DSDKDriveriSDK : DSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (DSDKNDAppBeaconAPI *)getAppBeaconAPI __attribute__((swift_name("getAppBeaconAPI()")));
- (DSDKNDAuthAPI *)getAuthAPI __attribute__((swift_name("getAuthAPI()")));
- (DSDKEither<DSDKNDError *, DSDKNDCoachingAPI *> *)getCoachingAPI __attribute__((swift_name("getCoachingAPI()")));
- (DSDKEither<DSDKNDError *, DSDKNDEventAccessAPI *> *)getEventAccessAPI __attribute__((swift_name("getEventAccessAPI()")));
- (DSDKEither<DSDKNDError *, DSDKNDEventsAPI *> *)getEventsAPI __attribute__((swift_name("getEventsAPI()")));
- (DSDKEither<DSDKNDError *, DSDKNDGreenzoneAPI *> *)getGreenzoneAPI __attribute__((swift_name("getGreenzoneAPI()")));
- (DSDKNDUserAPI *)getUserAPI __attribute__((swift_name("getUserAPI()")));
- (DSDKEither<DSDKNDError *, DSDKNDVideoAPI *> *)getVideoAPI __attribute__((swift_name("getVideoAPI()")));
@end;

__attribute__((swift_name("Either")))
@interface DSDKEither<__covariant L, __covariant R> : DSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (L _Nullable)getLeft __attribute__((swift_name("getLeft()")));
- (R _Nullable)getRight __attribute__((swift_name("getRight()")));
@property (readonly) BOOL isLeft __attribute__((swift_name("isLeft")));
@property (readonly) BOOL isRight __attribute__((swift_name("isRight")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EitherLeft")))
@interface DSDKEitherLeft<__covariant L> : DSDKEither<L, DSDKKotlinNothing *>
- (instancetype)initWithValue:(L _Nullable)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (L _Nullable)component1 __attribute__((swift_name("component1()")));
- (DSDKEitherLeft<L> *)doCopyValue:(L _Nullable)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) L _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EitherRight")))
@interface DSDKEitherRight<__covariant R> : DSDKEither<DSDKKotlinNothing *, R>
- (instancetype)initWithValue:(R _Nullable)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (R _Nullable)component1 __attribute__((swift_name("component1()")));
- (DSDKEitherRight<R> *)doCopyValue:(R _Nullable)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) R _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDError")))
@interface DSDKNDError : DSDKBase
- (instancetype)initWithCode:(int32_t)code message:(NSString *)message __attribute__((swift_name("init(code:message:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (DSDKNDError *)doCopyCode:(int32_t)code message:(NSString *)message __attribute__((swift_name("doCopy(code:message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DriverScoreWithRank")))
@interface DSDKDriverScoreWithRank : DSDKBase
- (instancetype)initWithGreenzone_score:(DSDKInt * _Nullable)greenzone_score rank:(DSDKInt * _Nullable)rank driverId:(int32_t)driverId __attribute__((swift_name("init(greenzone_score:rank:driverId:)"))) __attribute__((objc_designated_initializer));
- (DSDKInt * _Nullable)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (DSDKDriverScoreWithRank *)doCopyGreenzone_score:(DSDKInt * _Nullable)greenzone_score rank:(DSDKInt * _Nullable)rank driverId:(int32_t)driverId __attribute__((swift_name("doCopy(greenzone_score:rank:driverId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t driverId __attribute__((swift_name("driverId")));
@property (readonly) int32_t greenzoneScore __attribute__((swift_name("greenzoneScore")));
@property (readonly) DSDKInt * _Nullable rank __attribute__((swift_name("rank")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DriverScoreWithRank.Companion")))
@interface DSDKDriverScoreWithRankCompanion : DSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DrivingStats")))
@interface DSDKDrivingStats : DSDKBase
- (instancetype)initWithId:(int32_t)id count:(int32_t)count name:(NSString *)name description:(NSString *)description displayCount:(NSString * _Nullable)displayCount color:(NSString * _Nullable)color __attribute__((swift_name("init(id:count:name:description:displayCount:color:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (DSDKDrivingStats *)doCopyId:(int32_t)id count:(int32_t)count name:(NSString *)name description:(NSString *)description displayCount:(NSString * _Nullable)displayCount color:(NSString * _Nullable)color __attribute__((swift_name("doCopy(id:count:name:description:displayCount:color:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable color __attribute__((swift_name("color")));
@property (readonly) int32_t count __attribute__((swift_name("count")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) NSString * _Nullable displayCount __attribute__((swift_name("displayCount")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DrivingStats.Companion")))
@interface DSDKDrivingStatsCompanion : DSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HighImpactEvent")))
@interface DSDKHighImpactEvent : DSDKBase
- (instancetype)initWithCount:(int32_t)count name:(NSString *)name potentialScore:(DSDKInt * _Nullable)potentialScore duration:(NSString * _Nullable)duration __attribute__((swift_name("init(count:name:potentialScore:duration:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (DSDKInt * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (DSDKHighImpactEvent *)doCopyCount:(int32_t)count name:(NSString *)name potentialScore:(DSDKInt * _Nullable)potentialScore duration:(NSString * _Nullable)duration __attribute__((swift_name("doCopy(count:name:potentialScore:duration:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t count __attribute__((swift_name("count")));
@property (readonly) NSString * _Nullable duration __attribute__((swift_name("duration")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) DSDKInt * _Nullable potentialScore __attribute__((swift_name("potentialScore")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HighImpactEvent.Companion")))
@interface DSDKHighImpactEventCompanion : DSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDGreenzoneAPI")))
@interface DSDKNDGreenzoneAPI : DSDKBase
- (void)cancel __attribute__((swift_name("cancel()")));
- (void)getDriverScoreLeaderboardInterval:(DSDKNDStatsInterval *)interval startTime:(int64_t)startTime callback:(void (^)(DSDKNDError * _Nullable, DSDKNDLeaderboard * _Nullable))callback __attribute__((swift_name("getDriverScoreLeaderboard(interval:startTime:callback:)")));
- (void)getGreenzoneStatsInterval:(DSDKNDStatsInterval *)interval startTime:(int64_t)startTime callback:(void (^)(DSDKNDError * _Nullable, DSDKNDGreenzoneStats * _Nullable))callback __attribute__((swift_name("getGreenzoneStats(interval:startTime:callback:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDGreenzoneStats")))
@interface DSDKNDGreenzoneStats : DSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)toJSONString __attribute__((swift_name("toJSONString()")));
@property (readonly) int32_t driverScore __attribute__((swift_name("driverScore")));
@property (readonly) NSArray<DSDKDrivingStats *> * _Nullable drivingStats __attribute__((swift_name("drivingStats")));
@property (readonly) int32_t fleetGoalScore __attribute__((swift_name("fleetGoalScore")));
@property (readonly) int32_t fleetScore __attribute__((swift_name("fleetScore")));
@property (readonly) BOOL hasDriven __attribute__((swift_name("hasDriven")));
@property (readonly) NSArray<DSDKHighImpactEvent *> *highImpactEvents __attribute__((swift_name("highImpactEvents")));
@property (readonly) int32_t maxScore __attribute__((swift_name("maxScore")));
@property (readonly) int32_t poorPerformanceThreshold __attribute__((swift_name("poorPerformanceThreshold")));
@property (readonly) DSDKInt * _Nullable potentialScore __attribute__((swift_name("potentialScore")));
@property (readonly) int32_t topPerformanceThreshold __attribute__((swift_name("topPerformanceThreshold")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDGreenzoneStats.Companion")))
@interface DSDKNDGreenzoneStatsCompanion : DSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDLeaderboard")))
@interface DSDKNDLeaderboard : DSDKBase
- (instancetype)initWithNumDrivers:(DSDKInt * _Nullable)numDrivers leaderboard:(NSArray<DSDKDriverScoreWithRank *> * _Nullable)leaderboard gamificationFlag:(DSDKBoolean * _Nullable)gamificationFlag __attribute__((swift_name("init(numDrivers:leaderboard:gamificationFlag:)"))) __attribute__((objc_designated_initializer));
- (DSDKInt * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSArray<DSDKDriverScoreWithRank *> * _Nullable)component2 __attribute__((swift_name("component2()")));
- (DSDKNDLeaderboard *)doCopyNumDrivers:(DSDKInt * _Nullable)numDrivers leaderboard:(NSArray<DSDKDriverScoreWithRank *> * _Nullable)leaderboard gamificationFlag:(DSDKBoolean * _Nullable)gamificationFlag __attribute__((swift_name("doCopy(numDrivers:leaderboard:gamificationFlag:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJSONString __attribute__((swift_name("toJSONString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<DSDKDriverScoreWithRank *> * _Nullable leaderboard __attribute__((swift_name("leaderboard")));
@property (readonly) DSDKInt * _Nullable numDrivers __attribute__((swift_name("numDrivers")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDLeaderboard.Companion")))
@interface DSDKNDLeaderboardCompanion : DSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("NDStatsInterval")))
@interface DSDKNDStatsInterval : DSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDStatsInterval.DAILY")))
@interface DSDKNDStatsIntervalDAILY : DSDKNDStatsInterval
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)dAILY __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDStatsInterval.MONTHLY")))
@interface DSDKNDStatsIntervalMONTHLY : DSDKNDStatsInterval
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)mONTHLY __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDStatsInterval.WEEKLY")))
@interface DSDKNDStatsIntervalWEEKLY : DSDKNDStatsInterval
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)wEEKLY __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDAuthAPI")))
@interface DSDKNDAuthAPI : DSDKBase
- (void)authenticateUserUsername:(NSString *)username password:(NSString *)password callback:(void (^)(DSDKNDError * _Nullable))callback __attribute__((swift_name("authenticateUser(username:password:callback:)")));
- (void)authenticateUserWith2FAUsername:(NSString *)username password:(NSString *)password twoFACode:(NSString *)twoFACode callback:(void (^)(DSDKNDError * _Nullable))callback __attribute__((swift_name("authenticateUserWith2FA(username:password:twoFACode:callback:)")));
- (void)authenticateUserWithSSOCodeCode:(NSString *)code tenantIdentifier:(NSString *)tenantIdentifier callback:(void (^)(DSDKNDError * _Nullable))callback __attribute__((swift_name("authenticateUserWithSSOCode(code:tenantIdentifier:callback:)")));
- (void)cancel __attribute__((swift_name("cancel()")));
- (void)getSSORedirectUrlUsername:(NSString *)username callback:(void (^)(DSDKNDError * _Nullable, NSString * _Nullable))callback __attribute__((swift_name("getSSORedirectUrl(username:callback:)")));
- (BOOL)isAuthenticated __attribute__((swift_name("isAuthenticated()")));
- (void)revokeAuthenticationCallback:(void (^)(DSDKNDError * _Nullable))callback __attribute__((swift_name("revokeAuthentication(callback:)")));
- (void)skip2FAActivationUsername:(NSString *)username password:(NSString *)password callback:(void (^)(DSDKNDError * _Nullable))callback __attribute__((swift_name("skip2FAActivation(username:password:callback:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SSOStatus")))
@interface DSDKSSOStatus : DSDKBase
- (instancetype)initWithMsg:(NSString * _Nullable)msg redirectUrl:(NSString * _Nullable)redirectUrl ssoSupported:(DSDKBoolean * _Nullable)ssoSupported __attribute__((swift_name("init(msg:redirectUrl:ssoSupported:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (DSDKBoolean * _Nullable)component3 __attribute__((swift_name("component3()")));
- (DSDKSSOStatus *)doCopyMsg:(NSString * _Nullable)msg redirectUrl:(NSString * _Nullable)redirectUrl ssoSupported:(DSDKBoolean * _Nullable)ssoSupported __attribute__((swift_name("doCopy(msg:redirectUrl:ssoSupported:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));
@property (readonly) NSString * _Nullable redirectUrl __attribute__((swift_name("redirectUrl")));
@property (readonly) DSDKBoolean * _Nullable ssoSupported __attribute__((swift_name("ssoSupported")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SSOStatus.Companion")))
@interface DSDKSSOStatusCompanion : DSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SSOStatusResponse")))
@interface DSDKSSOStatusResponse : DSDKBase
- (instancetype)initWithData:(DSDKSSOStatus * _Nullable)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (DSDKSSOStatus * _Nullable)component1 __attribute__((swift_name("component1()")));
- (DSDKSSOStatusResponse *)doCopyData:(DSDKSSOStatus * _Nullable)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DSDKSSOStatus * _Nullable data __attribute__((swift_name("data")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SSOStatusResponse.Companion")))
@interface DSDKSSOStatusResponseCompanion : DSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("ApiResponse")))
@interface DSDKApiResponse : DSDKBase
- (instancetype)initWithResponse:(BOOL)response msg:(NSString * _Nullable)msg msgCode:(NSString * _Nullable)msgCode data:(NSString * _Nullable)data __attribute__((swift_name("init(response:msg:msgCode:data:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString * _Nullable data __attribute__((swift_name("data")));
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));
@property (readonly) NSString * _Nullable msgCode __attribute__((swift_name("msgCode")));
@property (readonly) BOOL response __attribute__((swift_name("response")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiResponse.Companion")))
@interface DSDKApiResponseCompanion : DSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDAPIClient")))
@interface DSDKNDAPIClient : DSDKBase
- (void)deleteUrl:(NSString *)url callback:(void (^)(DSDKNDError * _Nullable, DSDKNDAPIResponse * _Nullable))callback __attribute__((swift_name("delete(url:callback:)")));
- (void)getUrl:(NSString *)url callback:(void (^)(DSDKNDError * _Nullable, DSDKNDAPIResponse * _Nullable))callback __attribute__((swift_name("get(url:callback:)")));
- (void)postUrl:(NSString *)url body:(NSString *)body callback:(void (^)(DSDKNDError * _Nullable, DSDKNDAPIResponse * _Nullable))callback __attribute__((swift_name("post(url:body:callback:)")));
- (void)putUrl:(NSString *)url body:(NSString *)body callback:(void (^)(DSDKNDError * _Nullable, DSDKNDAPIResponse * _Nullable))callback __attribute__((swift_name("put(url:body:callback:)")));
@property (readonly) id appSettings __attribute__((swift_name("appSettings")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDAPIResponse")))
@interface DSDKNDAPIResponse : DSDKBase
- (instancetype)initWithStatus:(int32_t)status response:(NSString *)response headers:(NSDictionary<NSString *, NSString *> *)headers __attribute__((swift_name("init(status:response:headers:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSDictionary<NSString *, NSString *> *)component3 __attribute__((swift_name("component3()")));
- (DSDKNDAPIResponse *)doCopyStatus:(int32_t)status response:(NSString *)response headers:(NSDictionary<NSString *, NSString *> *)headers __attribute__((swift_name("doCopy(status:response:headers:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, NSString *> *headers __attribute__((swift_name("headers")));
@property (readonly) NSString *response __attribute__((swift_name("response")));
@property (readonly) int32_t status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDAPIResponse.Companion")))
@interface DSDKNDAPIResponseCompanion : DSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlertTypeCount")))
@interface DSDKAlertTypeCount : DSDKBase
- (instancetype)initWithAlertType:(NSString *)alertType totalAlerts:(int32_t)totalAlerts moderateAlerts:(int32_t)moderateAlerts severeAlerts:(int32_t)severeAlerts contributionPercentage:(double)contributionPercentage __attribute__((swift_name("init(alertType:totalAlerts:moderateAlerts:severeAlerts:contributionPercentage:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (int32_t)component4 __attribute__((swift_name("component4()")));
- (double)component5 __attribute__((swift_name("component5()")));
- (DSDKAlertTypeCount *)doCopyAlertType:(NSString *)alertType totalAlerts:(int32_t)totalAlerts moderateAlerts:(int32_t)moderateAlerts severeAlerts:(int32_t)severeAlerts contributionPercentage:(double)contributionPercentage __attribute__((swift_name("doCopy(alertType:totalAlerts:moderateAlerts:severeAlerts:contributionPercentage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *alertType __attribute__((swift_name("alertType")));
@property (readonly) double contributionPercentage __attribute__((swift_name("contributionPercentage")));
@property (readonly) int32_t moderateAlerts __attribute__((swift_name("moderateAlerts")));
@property (readonly) int32_t severeAlerts __attribute__((swift_name("severeAlerts")));
@property (readonly) int32_t totalAlerts __attribute__((swift_name("totalAlerts")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlertTypeCount.Companion")))
@interface DSDKAlertTypeCountCompanion : DSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DriverStarSubtypeCount")))
@interface DSDKDriverStarSubtypeCount : DSDKBase
- (instancetype)initWithDriverStarSubType:(NSString *)driverStarSubType count:(int32_t)count contributionPercentage:(double)contributionPercentage __attribute__((swift_name("init(driverStarSubType:count:contributionPercentage:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (double)component3 __attribute__((swift_name("component3()")));
- (DSDKDriverStarSubtypeCount *)doCopyDriverStarSubType:(NSString *)driverStarSubType count:(int32_t)count contributionPercentage:(double)contributionPercentage __attribute__((swift_name("doCopy(driverStarSubType:count:contributionPercentage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double contributionPercentage __attribute__((swift_name("contributionPercentage")));
@property (readonly) int32_t count __attribute__((swift_name("count")));
@property (readonly) NSString *driverStarSubType __attribute__((swift_name("driverStarSubType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DriverStarSubtypeCount.Companion")))
@interface DSDKDriverStarSubtypeCountCompanion : DSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol DSDKKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<DSDKKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<DSDKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol DSDKKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<DSDKKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<DSDKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol DSDKKotlinx_serialization_coreKSerializer <DSDKKotlinx_serialization_coreSerializationStrategy, DSDKKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DriverStarSubtypeCountSerializer")))
@interface DSDKDriverStarSubtypeCountSerializer : DSDKBase <DSDKKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)driverStarSubtypeCountSerializer __attribute__((swift_name("init()")));
- (DSDKDriverStarSubtypeCount *)deserializeDecoder:(id<DSDKKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<DSDKKotlinx_serialization_coreEncoder>)encoder value:(DSDKDriverStarSubtypeCount *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<DSDKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("EventDateFilter")))
@interface DSDKEventDateFilter : DSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventDateFilter.Last30Days")))
@interface DSDKEventDateFilterLast30Days : DSDKEventDateFilter
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)last30Days __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventDateFilter.Last7Days")))
@interface DSDKEventDateFilterLast7Days : DSDKEventDateFilter
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)last7Days __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventDateFilter.LastMonth")))
@interface DSDKEventDateFilterLastMonth : DSDKEventDateFilter
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)lastMonth __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventDateFilter.LastWeek")))
@interface DSDKEventDateFilterLastWeek : DSDKEventDateFilter
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)lastWeek __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventDateFilter.ThisMonth")))
@interface DSDKEventDateFilterThisMonth : DSDKEventDateFilter
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)thisMonth __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventDateFilter.ThisWeek")))
@interface DSDKEventDateFilterThisWeek : DSDKEventDateFilter
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)thisWeek __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventDateFilter.Today")))
@interface DSDKEventDateFilterToday : DSDKEventDateFilter
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)today __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventDateFilter.Yesterday")))
@interface DSDKEventDateFilterYesterday : DSDKEventDateFilter
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)yesterday __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventGroupType")))
@interface DSDKEventGroupType : DSDKBase
- (instancetype)initWithTypeName:(NSString *)typeName __attribute__((swift_name("init(typeName:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (DSDKEventGroupType *)doCopyTypeName:(NSString *)typeName __attribute__((swift_name("doCopy(typeName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *typeName __attribute__((swift_name("typeName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventGroupType.Companion")))
@interface DSDKEventGroupTypeCompanion : DSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventGroupTypes")))
@interface DSDKEventGroupTypes : DSDKBase
- (instancetype)initWithTypes:(NSArray<DSDKEventGroupType *> *)types __attribute__((swift_name("init(types:)"))) __attribute__((objc_designated_initializer));
- (NSArray<DSDKEventGroupType *> *)component1 __attribute__((swift_name("component1()")));
- (DSDKEventGroupTypes *)doCopyTypes:(NSArray<DSDKEventGroupType *> *)types __attribute__((swift_name("doCopy(types:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<DSDKEventGroupType *> *types __attribute__((swift_name("types")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventGroupTypes.Companion")))
@interface DSDKEventGroupTypesCompanion : DSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventSubType")))
@interface DSDKEventSubType : DSDKBase
- (instancetype)initWithEventCode:(NSString *)eventCode eventDescription:(NSString *)eventDescription eventType:(NSString *)eventType __attribute__((swift_name("init(eventCode:eventDescription:eventType:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (DSDKEventSubType *)doCopyEventCode:(NSString *)eventCode eventDescription:(NSString *)eventDescription eventType:(NSString *)eventType __attribute__((swift_name("doCopy(eventCode:eventDescription:eventType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *eventCode __attribute__((swift_name("eventCode")));
@property (readonly) NSString *eventDescription __attribute__((swift_name("eventDescription")));
@property (readonly) NSString *eventType __attribute__((swift_name("eventType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventSubType.Companion")))
@interface DSDKEventSubTypeCompanion : DSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventVideoCamera")))
@interface DSDKEventVideoCamera : DSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventVideoCamera.Companion")))
@interface DSDKEventVideoCameraCompanion : DSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) int32_t EXT_CAM_1 __attribute__((swift_name("EXT_CAM_1")));
@property (readonly) int32_t EXT_CAM_2 __attribute__((swift_name("EXT_CAM_2")));
@property (readonly) int32_t EXT_CAM_3 __attribute__((swift_name("EXT_CAM_3")));
@property (readonly) int32_t EXT_CAM_4 __attribute__((swift_name("EXT_CAM_4")));
@property (readonly) int32_t INWARD __attribute__((swift_name("INWARD")));
@property (readonly) int32_t LEFT __attribute__((swift_name("LEFT")));
@property (readonly) int32_t OUTWARD __attribute__((swift_name("OUTWARD")));
@property (readonly) int32_t RIGHT __attribute__((swift_name("RIGHT")));
@property (readonly) int32_t UNKNOWN __attribute__((swift_name("UNKNOWN")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventVideoStatus")))
@interface DSDKEventVideoStatus : DSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventVideoStatus.Companion")))
@interface DSDKEventVideoStatusCompanion : DSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) int32_t AVAILABLE __attribute__((swift_name("AVAILABLE")));
@property (readonly) int32_t AVAILABLE_ON_REQUEST __attribute__((swift_name("AVAILABLE_ON_REQUEST")));
@property (readonly) int32_t NOT_AVAILABLE __attribute__((swift_name("NOT_AVAILABLE")));
@property (readonly) int32_t UPLOAD_IN_PROGRESS __attribute__((swift_name("UPLOAD_IN_PROGRESS")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LatLong")))
@interface DSDKLatLong : DSDKBase
- (instancetype)initWithLatitude:(double)latitude longitude:(double)longitude __attribute__((swift_name("init(latitude:longitude:)"))) __attribute__((objc_designated_initializer));
- (double)component1 __attribute__((swift_name("component1()")));
- (double)component2 __attribute__((swift_name("component2()")));
- (DSDKLatLong *)doCopyLatitude:(double)latitude longitude:(double)longitude __attribute__((swift_name("doCopy(latitude:longitude:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double latitude __attribute__((swift_name("latitude")));
@property (readonly) double longitude __attribute__((swift_name("longitude")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LatLong.Companion")))
@interface DSDKLatLongCompanion : DSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDAvailableEventTypes")))
@interface DSDKNDAvailableEventTypes : DSDKBase
- (instancetype)initWithPositiveEventTypes:(NSArray<NSString *> * _Nullable)positiveEventTypes betaEventTypes:(NSArray<NSString *> * _Nullable)betaEventTypes negativeEventTypes:(NSArray<NSString *> * _Nullable)negativeEventTypes compoundEventTypes:(NSArray<NSString *> * _Nullable)compoundEventTypes alphaEventTypes:(NSArray<NSString *> * _Nullable)alphaEventTypes nonPilotEventTypes:(NSArray<NSString *> * _Nullable)nonPilotEventTypes eventSubTypes:(NSArray<DSDKEventSubType *> * _Nullable)eventSubTypes compoundAlertGroupTypes:(NSString * _Nullable)compoundAlertGroupTypes alertGroupTypes:(NSString * _Nullable)alertGroupTypes __attribute__((swift_name("init(positiveEventTypes:betaEventTypes:negativeEventTypes:compoundEventTypes:alphaEventTypes:nonPilotEventTypes:eventSubTypes:compoundAlertGroupTypes:alertGroupTypes:)"))) __attribute__((objc_designated_initializer));
- (NSArray<NSString *> * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSArray<NSString *> * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSArray<NSString *> * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSArray<NSString *> * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSArray<NSString *> * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSArray<NSString *> * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSArray<DSDKEventSubType *> * _Nullable)component7 __attribute__((swift_name("component7()")));
- (DSDKNDAvailableEventTypes *)doCopyPositiveEventTypes:(NSArray<NSString *> * _Nullable)positiveEventTypes betaEventTypes:(NSArray<NSString *> * _Nullable)betaEventTypes negativeEventTypes:(NSArray<NSString *> * _Nullable)negativeEventTypes compoundEventTypes:(NSArray<NSString *> * _Nullable)compoundEventTypes alphaEventTypes:(NSArray<NSString *> * _Nullable)alphaEventTypes nonPilotEventTypes:(NSArray<NSString *> * _Nullable)nonPilotEventTypes eventSubTypes:(NSArray<DSDKEventSubType *> * _Nullable)eventSubTypes compoundAlertGroupTypes:(NSString * _Nullable)compoundAlertGroupTypes alertGroupTypes:(NSString * _Nullable)alertGroupTypes __attribute__((swift_name("doCopy(positiveEventTypes:betaEventTypes:negativeEventTypes:compoundEventTypes:alphaEventTypes:nonPilotEventTypes:eventSubTypes:compoundAlertGroupTypes:alertGroupTypes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJSONString __attribute__((swift_name("toJSONString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> * _Nullable alphaEventTypes __attribute__((swift_name("alphaEventTypes")));
@property (readonly) NSArray<NSString *> * _Nullable betaEventTypes __attribute__((swift_name("betaEventTypes")));
@property (readonly) NSDictionary<NSString *, DSDKEventGroupTypes *> *compoundEventGroupTypes __attribute__((swift_name("compoundEventGroupTypes")));
@property (readonly) NSArray<NSString *> * _Nullable compoundEventTypes __attribute__((swift_name("compoundEventTypes")));
@property (readonly) NSDictionary<NSString *, DSDKEventGroupTypes *> *eventGroupTypes __attribute__((swift_name("eventGroupTypes")));
@property (readonly) NSArray<DSDKEventSubType *> * _Nullable eventSubTypes __attribute__((swift_name("eventSubTypes")));
@property (readonly) NSArray<NSString *> * _Nullable negativeEventTypes __attribute__((swift_name("negativeEventTypes")));
@property (readonly) NSArray<NSString *> * _Nullable nonPilotEventTypes __attribute__((swift_name("nonPilotEventTypes")));
@property (readonly) NSArray<NSString *> * _Nullable positiveEventTypes __attribute__((swift_name("positiveEventTypes")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDAvailableEventTypes.Companion")))
@interface DSDKNDAvailableEventTypesCompanion : DSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDAvailableEventTypesSerializer")))
@interface DSDKNDAvailableEventTypesSerializer : DSDKBase <DSDKKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)nDAvailableEventTypesSerializer __attribute__((swift_name("init()")));
- (DSDKNDAvailableEventTypes *)deserializeDecoder:(id<DSDKKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<DSDKKotlinx_serialization_coreEncoder>)encoder value:(DSDKNDAvailableEventTypes *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<DSDKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDEvent")))
@interface DSDKNDEvent : DSDKBase
- (instancetype)initWithEventId:(int32_t)eventId eventSeverityLevel:(NSString *)eventSeverityLevel eventDescription:(NSString *)eventDescription causedBy:(int32_t)causedBy timeStamp:(int64_t)timeStamp vehicleNumber:(NSString * _Nullable)vehicleNumber eventVideoOffset:(DSDKInt * _Nullable)eventVideoOffset eventDuration:(DSDKInt * _Nullable)eventDuration eventVideoStatus:(int32_t)eventVideoStatus driverName:(NSString * _Nullable)driverName eventVideoPath:(NSString * _Nullable)eventVideoPath eventVideoFileName:(NSString * _Nullable)eventVideoFileName coachingSessionId:(DSDKInt * _Nullable)coachingSessionId sessionId:(NSString * _Nullable)sessionId txnHash:(NSString * _Nullable)txnHash rawAlertType:(NSString *)rawAlertType startLatLong:(NSString * _Nullable)startLatLong endLatLong:(NSString * _Nullable)endLatLong driverId:(DSDKInt * _Nullable)driverId privacyMode:(DSDKInt * _Nullable)privacyMode alertCategory:(int32_t)alertCategory __attribute__((swift_name("init(eventId:eventSeverityLevel:eventDescription:causedBy:timeStamp:vehicleNumber:eventVideoOffset:eventDuration:eventVideoStatus:driverName:eventVideoPath:eventVideoFileName:coachingSessionId:sessionId:txnHash:rawAlertType:startLatLong:endLatLong:driverId:privacyMode:alertCategory:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()")));
- (DSDKInt * _Nullable)component13 __attribute__((swift_name("component13()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (int32_t)component4 __attribute__((swift_name("component4()")));
- (int64_t)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (DSDKInt * _Nullable)component7 __attribute__((swift_name("component7()")));
- (DSDKInt * _Nullable)component8 __attribute__((swift_name("component8()")));
- (int32_t)component9 __attribute__((swift_name("component9()")));
- (DSDKNDEvent *)doCopyEventId:(int32_t)eventId eventSeverityLevel:(NSString *)eventSeverityLevel eventDescription:(NSString *)eventDescription causedBy:(int32_t)causedBy timeStamp:(int64_t)timeStamp vehicleNumber:(NSString * _Nullable)vehicleNumber eventVideoOffset:(DSDKInt * _Nullable)eventVideoOffset eventDuration:(DSDKInt * _Nullable)eventDuration eventVideoStatus:(int32_t)eventVideoStatus driverName:(NSString * _Nullable)driverName eventVideoPath:(NSString * _Nullable)eventVideoPath eventVideoFileName:(NSString * _Nullable)eventVideoFileName coachingSessionId:(DSDKInt * _Nullable)coachingSessionId sessionId:(NSString * _Nullable)sessionId txnHash:(NSString * _Nullable)txnHash rawAlertType:(NSString *)rawAlertType startLatLong:(NSString * _Nullable)startLatLong endLatLong:(NSString * _Nullable)endLatLong driverId:(DSDKInt * _Nullable)driverId privacyMode:(DSDKInt * _Nullable)privacyMode alertCategory:(int32_t)alertCategory __attribute__((swift_name("doCopy(eventId:eventSeverityLevel:eventDescription:causedBy:timeStamp:vehicleNumber:eventVideoOffset:eventDuration:eventVideoStatus:driverName:eventVideoPath:eventVideoFileName:coachingSessionId:sessionId:txnHash:rawAlertType:startLatLong:endLatLong:driverId:privacyMode:alertCategory:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJSONString __attribute__((swift_name("toJSONString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t causedBy __attribute__((swift_name("causedBy")));
@property DSDKInt * _Nullable coachingSessionId __attribute__((swift_name("coachingSessionId")));
@property (readonly) int32_t commentsCount __attribute__((swift_name("commentsCount")));
@property (readonly) NSString * _Nullable driverName __attribute__((swift_name("driverName")));
@property (readonly) double endLatitude __attribute__((swift_name("endLatitude")));
@property (readonly) double endLongitude __attribute__((swift_name("endLongitude")));
@property (readonly) NSString *eventDescription __attribute__((swift_name("eventDescription")));
@property (readonly) DSDKInt * _Nullable eventDuration __attribute__((swift_name("eventDuration")));
@property (readonly) int32_t eventId __attribute__((swift_name("eventId")));
@property (readonly) NSString *eventSeverityLevel __attribute__((swift_name("eventSeverityLevel")));
@property (readonly) NSString *eventType __attribute__((swift_name("eventType")));
@property (readonly) int32_t eventVideoCamera __attribute__((swift_name("eventVideoCamera")));
@property (readonly) DSDKInt * _Nullable eventVideoOffset __attribute__((swift_name("eventVideoOffset")));
@property (readonly) NSString * _Nullable eventVideoPath __attribute__((swift_name("eventVideoPath")));
@property (readonly) NSString * _Nullable eventVideoPreviewUrl __attribute__((swift_name("eventVideoPreviewUrl")));
@property (readonly) int32_t eventVideoStatus __attribute__((swift_name("eventVideoStatus")));
@property (readonly) BOOL isFavorite __attribute__((swift_name("isFavorite")));
@property (readonly) BOOL isPrivacyModeEnabled __attribute__((swift_name("isPrivacyModeEnabled")));
@property (readonly) BOOL isViewed __attribute__((swift_name("isViewed")));
@property (readonly) double startLatitude __attribute__((swift_name("startLatitude")));
@property (readonly) double startLongitude __attribute__((swift_name("startLongitude")));
@property (readonly) int64_t timeStamp __attribute__((swift_name("timeStamp")));
@property (readonly) NSString * _Nullable vehicleNumber __attribute__((swift_name("vehicleNumber")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDEvent.Companion")))
@interface DSDKNDEventCompanion : DSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *ALERT __attribute__((swift_name("ALERT")));
@property (readonly) int32_t CAUSED_BY_DRIVER __attribute__((swift_name("CAUSED_BY_DRIVER")));
@property (readonly) int32_t CAUSED_BY_OTHER __attribute__((swift_name("CAUSED_BY_OTHER")));
@property (readonly) int32_t CAUSED_BY_THIRD_PARTY __attribute__((swift_name("CAUSED_BY_THIRD_PARTY")));
@property (readonly) NSString *DRIVERSTAR __attribute__((swift_name("DRIVERSTAR")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@property (readonly) NSString *WARN __attribute__((swift_name("WARN")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDEventComment")))
@interface DSDKNDEventComment : DSDKBase
- (instancetype)initWithCreatedAt:(int64_t)createdAt createdBy:(int32_t)createdBy commentedBy:(NSString *)commentedBy comment:(NSString *)comment __attribute__((swift_name("init(createdAt:createdBy:commentedBy:comment:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (DSDKNDEventComment *)doCopyCreatedAt:(int64_t)createdAt createdBy:(int32_t)createdBy commentedBy:(NSString *)commentedBy comment:(NSString *)comment __attribute__((swift_name("doCopy(createdAt:createdBy:commentedBy:comment:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJSONString __attribute__((swift_name("toJSONString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *comment __attribute__((swift_name("comment")));
@property (readonly) NSString *commentedBy __attribute__((swift_name("commentedBy")));
@property (readonly) int64_t createdAt __attribute__((swift_name("createdAt")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDEventComment.Companion")))
@interface DSDKNDEventCommentCompanion : DSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDEventData")))
@interface DSDKNDEventData : DSDKBase
- (instancetype)initWithEvents:(NSArray<DSDKNDEvent *> *)events alertDistribution:(NSArray<DSDKAlertTypeCount *> * _Nullable)alertDistribution negativeEventTypes:(NSArray<NSString *> * _Nullable)negativeEventTypes positiveEventTypes:(NSArray<NSString *> * _Nullable)positiveEventTypes __attribute__((swift_name("init(events:alertDistribution:negativeEventTypes:positiveEventTypes:)"))) __attribute__((objc_designated_initializer));
- (NSArray<DSDKNDEvent *> *)component1 __attribute__((swift_name("component1()")));
- (NSArray<DSDKAlertTypeCount *> * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSArray<NSString *> * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSArray<NSString *> * _Nullable)component4 __attribute__((swift_name("component4()")));
- (DSDKNDEventData *)doCopyEvents:(NSArray<DSDKNDEvent *> *)events alertDistribution:(NSArray<DSDKAlertTypeCount *> * _Nullable)alertDistribution negativeEventTypes:(NSArray<NSString *> * _Nullable)negativeEventTypes positiveEventTypes:(NSArray<NSString *> * _Nullable)positiveEventTypes __attribute__((swift_name("doCopy(events:alertDistribution:negativeEventTypes:positiveEventTypes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJSONString __attribute__((swift_name("toJSONString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<DSDKAlertTypeCount *> * _Nullable alertDistribution __attribute__((swift_name("alertDistribution")));
@property (readonly) NSArray<DSDKDriverStarSubtypeCount *> *driverStarDistribution __attribute__((swift_name("driverStarDistribution")));
@property (readonly) NSArray<DSDKNDEvent *> *events __attribute__((swift_name("events")));
@property (readonly) NSArray<NSString *> * _Nullable negativeEventTypes __attribute__((swift_name("negativeEventTypes")));
@property (readonly) NSArray<NSString *> * _Nullable positiveEventTypes __attribute__((swift_name("positiveEventTypes")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDEventData.Companion")))
@interface DSDKNDEventDataCompanion : DSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDEventDetail")))
@interface DSDKNDEventDetail : DSDKBase
- (instancetype)initWithEvent:(DSDKNDEvent *)event videos:(NSArray<DSDKNDVideo *> * _Nullable)videos __attribute__((swift_name("init(event:videos:)"))) __attribute__((objc_designated_initializer));
- (DSDKNDEvent *)component1 __attribute__((swift_name("component1()")));
- (NSArray<DSDKNDVideo *> * _Nullable)component2 __attribute__((swift_name("component2()")));
- (DSDKNDEventDetail *)doCopyEvent:(DSDKNDEvent *)event videos:(NSArray<DSDKNDVideo *> * _Nullable)videos __attribute__((swift_name("doCopy(event:videos:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJSONString __attribute__((swift_name("toJSONString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DSDKNDEvent *event __attribute__((swift_name("event")));
@property (readonly) NSArray<DSDKLatLong *> *latLongTrail __attribute__((swift_name("latLongTrail")));
@property (readonly) DSDKLatLong *videoEndLatLong __attribute__((swift_name("videoEndLatLong")));
@property (readonly) DSDKLatLong *videoStartLatLong __attribute__((swift_name("videoStartLatLong")));
@property (readonly) NSArray<DSDKNDVideo *> * _Nullable videos __attribute__((swift_name("videos")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDEventDetail.Companion")))
@interface DSDKNDEventDetailCompanion : DSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDEventsAPI")))
@interface DSDKNDEventsAPI : DSDKBase
- (void)cancel __attribute__((swift_name("cancel()")));
- (void)changeEventFavoriteStatusEvent:(DSDKNDEvent *)event callback:(void (^)(DSDKNDError * _Nullable, DSDKBoolean *))callback __attribute__((swift_name("changeEventFavoriteStatus(event:callback:)")));
- (void)getCommentsForEventEvent:(DSDKNDEvent *)event callback:(void (^)(DSDKNDError * _Nullable, NSArray<DSDKNDEventComment *> * _Nullable))callback __attribute__((swift_name("getCommentsForEvent(event:callback:)")));
- (void)getEventDetailEventId:(int32_t)eventId callback:(void (^)(DSDKNDError * _Nullable, DSDKNDEventDetail * _Nullable))callback __attribute__((swift_name("getEventDetail(eventId:callback:)")));
- (NSArray<DSDKNDFeedbackCategory *> *)getEventFeedbackCategories __attribute__((swift_name("getEventFeedbackCategories()")));
- (void)getEventsInTimeIntervalEventDateFilter:(DSDKEventDateFilter *)eventDateFilter callback:(void (^)(DSDKNDError * _Nullable, DSDKNDEventData * _Nullable))callback __attribute__((swift_name("getEventsInTimeInterval(eventDateFilter:callback:)")));
- (void)getEventsInTimeIntervalStartTime:(int64_t)startTime endTime:(int64_t)endTime callback:(void (^)(DSDKNDError * _Nullable, DSDKNDEventData * _Nullable))callback __attribute__((swift_name("getEventsInTimeInterval(startTime:endTime:callback:)")));
- (void)getFeedbackConversationFeedbackId:(NSString *)feedbackId callback:(void (^)(DSDKNDError * _Nullable, NSArray<DSDKNDFeedbackConversation *> * _Nullable))callback __attribute__((swift_name("getFeedbackConversation(feedbackId:callback:)")));
- (void)getFeedbackStateForEventEventId:(int32_t)eventId callback:(void (^)(DSDKNDError * _Nullable, NSArray<DSDKNDFeedbackState *> * _Nullable))callback __attribute__((swift_name("getFeedbackStateForEvent(eventId:callback:)")));
- (void)markEventAsViewedEvent:(DSDKNDEvent *)event callback:(void (^)(DSDKNDError * _Nullable, DSDKBoolean *))callback __attribute__((swift_name("markEventAsViewed(event:callback:)")));
- (void)postCommentOnEventEvent:(DSDKNDEvent *)event comment:(NSString *)comment callback:(void (^)(DSDKNDError * _Nullable, DSDKBoolean *))callback __attribute__((swift_name("postCommentOnEvent(event:comment:callback:)")));
- (void)submitFeedbackForEventFeedback:(DSDKNDEventFeedback *)feedback callback:(void (^)(DSDKNDError * _Nullable, DSDKBoolean *))callback __attribute__((swift_name("submitFeedbackForEvent(feedback:callback:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MarkVCCompleteRequest")))
@interface DSDKMarkVCCompleteRequest : DSDKBase
- (instancetype)initWithVc_id:(NSString *)vc_id status:(int32_t)status __attribute__((swift_name("init(vc_id:status:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (DSDKMarkVCCompleteRequest *)doCopyVc_id:(NSString *)vc_id status:(int32_t)status __attribute__((swift_name("doCopy(vc_id:status:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t status __attribute__((swift_name("status")));
@property (readonly) NSString *vc_id __attribute__((swift_name("vc_id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MarkVCCompleteRequest.Companion")))
@interface DSDKMarkVCCompleteRequestCompanion : DSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDCoachingAPI")))
@interface DSDKNDCoachingAPI : DSDKBase
- (void)cancel __attribute__((swift_name("cancel()")));
- (void)getCompletedWeeklyReviewSessionsCallback:(void (^)(DSDKNDError * _Nullable, NSArray<DSDKNDWeeklyReviewSession *> * _Nullable))callback __attribute__((swift_name("getCompletedWeeklyReviewSessions(callback:)")));
- (void)getPendingWeeklyReviewSessionsCallback:(void (^)(DSDKNDError * _Nullable, NSArray<DSDKNDWeeklyReviewSession *> * _Nullable))callback __attribute__((swift_name("getPendingWeeklyReviewSessions(callback:)")));
- (void)getWeeklyReviewSessionDetailSessionId:(NSString *)sessionId callback:(void (^)(DSDKNDError * _Nullable, DSDKNDWeeklyReviewSessionDetail * _Nullable))callback __attribute__((swift_name("getWeeklyReviewSessionDetail(sessionId:callback:)")));
- (void)markWeeklyReviewSessionAsCompleteSessionId:(NSString *)sessionId callback:(void (^)(DSDKNDError * _Nullable, DSDKBoolean *))callback __attribute__((swift_name("markWeeklyReviewSessionAsComplete(sessionId:callback:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDWeeklyReviewSession")))
@interface DSDKNDWeeklyReviewSession : DSDKBase
- (instancetype)initWithSessionId:(NSString *)sessionId description:(NSString * _Nullable)description createdAt:(DSDKLong * _Nullable)createdAt driverId:(DSDKInt * _Nullable)driverId driverName:(NSString * _Nullable)driverName sessionStartTime:(int64_t)sessionStartTime sessionEndTime:(int64_t)sessionEndTime driverStarsCount:(DSDKInt * _Nullable)driverStarsCount subTenantId:(DSDKInt * _Nullable)subTenantId tenantId:(DSDKInt * _Nullable)tenantId eventIds:(NSArray<DSDKLong *> * _Nullable)eventIds eventTypeInt:(int32_t)eventTypeInt driverStarIds:(NSArray<DSDKLong *> * _Nullable)driverStarIds greenzoneVersion:(NSString * _Nullable)greenzoneVersion sessionAge:(DSDKInt * _Nullable)sessionAge vcStatus:(int32_t)vcStatus __attribute__((swift_name("init(sessionId:description:createdAt:driverId:driverName:sessionStartTime:sessionEndTime:driverStarsCount:subTenantId:tenantId:eventIds:eventTypeInt:driverStarIds:greenzoneVersion:sessionAge:vcStatus:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSArray<DSDKLong *> * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSArray<DSDKLong *> * _Nullable)component13 __attribute__((swift_name("component13()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (int64_t)component6 __attribute__((swift_name("component6()")));
- (int64_t)component7 __attribute__((swift_name("component7()")));
- (DSDKInt * _Nullable)component8 __attribute__((swift_name("component8()")));
- (DSDKNDWeeklyReviewSession *)doCopySessionId:(NSString *)sessionId description:(NSString * _Nullable)description createdAt:(DSDKLong * _Nullable)createdAt driverId:(DSDKInt * _Nullable)driverId driverName:(NSString * _Nullable)driverName sessionStartTime:(int64_t)sessionStartTime sessionEndTime:(int64_t)sessionEndTime driverStarsCount:(DSDKInt * _Nullable)driverStarsCount subTenantId:(DSDKInt * _Nullable)subTenantId tenantId:(DSDKInt * _Nullable)tenantId eventIds:(NSArray<DSDKLong *> * _Nullable)eventIds eventTypeInt:(int32_t)eventTypeInt driverStarIds:(NSArray<DSDKLong *> * _Nullable)driverStarIds greenzoneVersion:(NSString * _Nullable)greenzoneVersion sessionAge:(DSDKInt * _Nullable)sessionAge vcStatus:(int32_t)vcStatus __attribute__((swift_name("doCopy(sessionId:description:createdAt:driverId:driverName:sessionStartTime:sessionEndTime:driverStarsCount:subTenantId:tenantId:eventIds:eventTypeInt:driverStarIds:greenzoneVersion:sessionAge:vcStatus:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) NSArray<DSDKLong *> * _Nullable driverStarIds __attribute__((swift_name("driverStarIds")));
@property (readonly) DSDKInt * _Nullable driverStarsCount __attribute__((swift_name("driverStarsCount")));
@property (readonly) NSArray<DSDKLong *> * _Nullable eventIds __attribute__((swift_name("eventIds")));
@property (readonly) NSString *eventType __attribute__((swift_name("eventType")));
@property (readonly) int64_t sessionEndTime __attribute__((swift_name("sessionEndTime")));
@property (readonly) NSString *sessionId __attribute__((swift_name("sessionId")));
@property (readonly) int64_t sessionStartTime __attribute__((swift_name("sessionStartTime")));
@property (readonly) NSString *status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDWeeklyReviewSession.Companion")))
@interface DSDKNDWeeklyReviewSessionCompanion : DSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDWeeklyReviewSessionDetail")))
@interface DSDKNDWeeklyReviewSessionDetail : DSDKBase
- (instancetype)initWithSessionId:(NSString *)sessionId createdAt:(DSDKLong * _Nullable)createdAt driverId:(DSDKInt * _Nullable)driverId sessionStartTime:(int64_t)sessionStartTime sessionEndTime:(int64_t)sessionEndTime driverStarsCount:(DSDKInt * _Nullable)driverStarsCount subTenantId:(DSDKInt * _Nullable)subTenantId tenantId:(DSDKInt * _Nullable)tenantId eventIds:(NSArray<DSDKLong *> * _Nullable)eventIds eventTypeInt:(int32_t)eventTypeInt driverStarIds:(NSArray<DSDKLong *> * _Nullable)driverStarIds greenzoneVersion:(NSString * _Nullable)greenzoneVersion vcStatus:(int32_t)vcStatus alertsInSession:(NSArray<DSDKNDEvent *> * _Nullable)alertsInSession driverStarsInSession:(NSArray<DSDKNDEvent *> * _Nullable)driverStarsInSession __attribute__((swift_name("init(sessionId:createdAt:driverId:sessionStartTime:sessionEndTime:driverStarsCount:subTenantId:tenantId:eventIds:eventTypeInt:driverStarIds:greenzoneVersion:vcStatus:alertsInSession:driverStarsInSession:)"))) __attribute__((objc_designated_initializer));
- (NSArray<DSDKNDEvent *> * _Nullable)component14 __attribute__((swift_name("component14()")));
- (NSArray<DSDKNDEvent *> * _Nullable)component15 __attribute__((swift_name("component15()")));
- (DSDKNDWeeklyReviewSessionDetail *)doCopySessionId:(NSString *)sessionId createdAt:(DSDKLong * _Nullable)createdAt driverId:(DSDKInt * _Nullable)driverId sessionStartTime:(int64_t)sessionStartTime sessionEndTime:(int64_t)sessionEndTime driverStarsCount:(DSDKInt * _Nullable)driverStarsCount subTenantId:(DSDKInt * _Nullable)subTenantId tenantId:(DSDKInt * _Nullable)tenantId eventIds:(NSArray<DSDKLong *> * _Nullable)eventIds eventTypeInt:(int32_t)eventTypeInt driverStarIds:(NSArray<DSDKLong *> * _Nullable)driverStarIds greenzoneVersion:(NSString * _Nullable)greenzoneVersion vcStatus:(int32_t)vcStatus alertsInSession:(NSArray<DSDKNDEvent *> * _Nullable)alertsInSession driverStarsInSession:(NSArray<DSDKNDEvent *> * _Nullable)driverStarsInSession __attribute__((swift_name("doCopy(sessionId:createdAt:driverId:sessionStartTime:sessionEndTime:driverStarsCount:subTenantId:tenantId:eventIds:eventTypeInt:driverStarIds:greenzoneVersion:vcStatus:alertsInSession:driverStarsInSession:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJSONString __attribute__((swift_name("toJSONString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t actualScore __attribute__((swift_name("actualScore")));
@property (readonly) NSArray<DSDKNDEvent *> * _Nullable alertsInSession __attribute__((swift_name("alertsInSession")));
@property (readonly) NSString * _Nullable appreciationText __attribute__((swift_name("appreciationText")));
@property (readonly) NSArray<DSDKNDEvent *> * _Nullable driverStarsInSession __attribute__((swift_name("driverStarsInSession")));
@property (readonly) int32_t potentialScore __attribute__((swift_name("potentialScore")));
@property (readonly) NSString * _Nullable recommendationText __attribute__((swift_name("recommendationText")));
@property (readonly) DSDKNDWeeklyReviewSession *weeklyReviewSession __attribute__((swift_name("weeklyReviewSession")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDWeeklyReviewSessionDetail.Companion")))
@interface DSDKNDWeeklyReviewSessionDetailCompanion : DSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDVideo")))
@interface DSDKNDVideo : DSDKBase
- (instancetype)initWithVideoId:(int64_t)videoId videoPath:(NSString * _Nullable)videoPath fileName:(NSString * _Nullable)fileName videoDuration:(DSDKInt * _Nullable)videoDuration videoStatus:(DSDKInt * _Nullable)videoStatus audioPath:(NSString * _Nullable)audioPath timestamp:(DSDKLong * _Nullable)timestamp privacyMode:(DSDKInt * _Nullable)privacyMode deviceId:(NSString * _Nullable)deviceId __attribute__((swift_name("init(videoId:videoPath:fileName:videoDuration:videoStatus:audioPath:timestamp:privacyMode:deviceId:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (DSDKInt * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (DSDKLong * _Nullable)component7 __attribute__((swift_name("component7()")));
- (DSDKInt * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (DSDKNDVideo *)doCopyVideoId:(int64_t)videoId videoPath:(NSString * _Nullable)videoPath fileName:(NSString * _Nullable)fileName videoDuration:(DSDKInt * _Nullable)videoDuration videoStatus:(DSDKInt * _Nullable)videoStatus audioPath:(NSString * _Nullable)audioPath timestamp:(DSDKLong * _Nullable)timestamp privacyMode:(DSDKInt * _Nullable)privacyMode deviceId:(NSString * _Nullable)deviceId __attribute__((swift_name("doCopy(videoId:videoPath:fileName:videoDuration:videoStatus:audioPath:timestamp:privacyMode:deviceId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable audioPath __attribute__((swift_name("audioPath")));
@property (readonly) int32_t camera __attribute__((swift_name("camera")));
@property (readonly) NSString * _Nullable deviceId __attribute__((swift_name("deviceId")));
@property (readonly) DSDKInt * _Nullable privacyMode __attribute__((swift_name("privacyMode")));
@property (readonly) int32_t status __attribute__((swift_name("status")));
@property (readonly) DSDKLong * _Nullable timestamp __attribute__((swift_name("timestamp")));
@property (readonly) DSDKInt * _Nullable videoDuration __attribute__((swift_name("videoDuration")));
@property (readonly) int64_t videoId __attribute__((swift_name("videoId")));
@property (readonly) NSString * _Nullable videoPath __attribute__((swift_name("videoPath")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDVideoAPI")))
@interface DSDKNDVideoAPI : DSDKBase
- (void)cancel __attribute__((swift_name("cancel()")));
- (void)getPresignedAudioUrlForVideoVideo:(DSDKNDVideo *)video callback:(void (^)(DSDKNDError * _Nullable, NSString * _Nullable))callback __attribute__((swift_name("getPresignedAudioUrlForVideo(video:callback:)")));
- (void)getPresignedUrlForDefaultEventVideoEvent:(DSDKNDEvent *)event callback:(void (^)(DSDKNDError * _Nullable, NSString * _Nullable))callback __attribute__((swift_name("getPresignedUrlForDefaultEventVideo(event:callback:)")));
- (void)getPresignedUrlForVideoVideo:(DSDKNDVideo *)video callback:(void (^)(DSDKNDError * _Nullable, NSString * _Nullable))callback __attribute__((swift_name("getPresignedUrlForVideo(video:callback:)")));
- (void)requestEventVideoEvent:(DSDKNDEvent *)event callback:(void (^)(DSDKNDError * _Nullable, DSDKBoolean *))callback __attribute__((swift_name("requestEventVideo(event:callback:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDCommentNotification")))
@interface DSDKNDCommentNotification : DSDKBase
- (instancetype)initWithEventId:(int32_t)eventId coachingSessionId:(int32_t)coachingSessionId comment:(NSString *)comment __attribute__((swift_name("init(eventId:coachingSessionId:comment:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (DSDKNDCommentNotification *)doCopyEventId:(int32_t)eventId coachingSessionId:(int32_t)coachingSessionId comment:(NSString *)comment __attribute__((swift_name("doCopy(eventId:coachingSessionId:comment:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t coachingSessionId __attribute__((swift_name("coachingSessionId")));
@property (readonly) NSString *comment __attribute__((swift_name("comment")));
@property (readonly) int32_t eventId __attribute__((swift_name("eventId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDCommentNotification.Companion")))
@interface DSDKNDCommentNotificationCompanion : DSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDDriverReportNotification")))
@interface DSDKNDDriverReportNotification : DSDKBase
- (instancetype)initWithRequestId:(int32_t)requestId timestamp:(int64_t)timestamp reportName:(NSString *)reportName __attribute__((swift_name("init(requestId:timestamp:reportName:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (DSDKNDDriverReportNotification *)doCopyRequestId:(int32_t)requestId timestamp:(int64_t)timestamp reportName:(NSString *)reportName __attribute__((swift_name("doCopy(requestId:timestamp:reportName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *reportName __attribute__((swift_name("reportName")));
@property (readonly) int32_t requestId __attribute__((swift_name("requestId")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDDriverReportNotification.Companion")))
@interface DSDKNDDriverReportNotificationCompanion : DSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDEventAccessNotification")))
@interface DSDKNDEventAccessNotification : DSDKBase
- (instancetype)initWithRequestId:(int32_t)requestId timestamp:(int64_t)timestamp __attribute__((swift_name("init(requestId:timestamp:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (DSDKNDEventAccessNotification *)doCopyRequestId:(int32_t)requestId timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(requestId:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t requestId __attribute__((swift_name("requestId")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDEventAccessNotification.Companion")))
@interface DSDKNDEventAccessNotificationCompanion : DSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDEventNotification")))
@interface DSDKNDEventNotification : DSDKBase
- (instancetype)initWithEventId:(int32_t)eventId timestamp:(int64_t)timestamp eventSeverity:(NSString *)eventSeverity eventType:(NSString *)eventType __attribute__((swift_name("init(eventId:timestamp:eventSeverity:eventType:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (DSDKNDEventNotification *)doCopyEventId:(int32_t)eventId timestamp:(int64_t)timestamp eventSeverity:(NSString *)eventSeverity eventType:(NSString *)eventType __attribute__((swift_name("doCopy(eventId:timestamp:eventSeverity:eventType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t eventId __attribute__((swift_name("eventId")));
@property (readonly) NSString *eventSeverity __attribute__((swift_name("eventSeverity")));
@property (readonly) NSString *eventType __attribute__((swift_name("eventType")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDEventNotification.Companion")))
@interface DSDKNDEventNotificationCompanion : DSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDFeedbackSharedNotification")))
@interface DSDKNDFeedbackSharedNotification : DSDKBase
- (instancetype)initWithTimestamp:(int64_t)timestamp feedbackId:(NSString *)feedbackId eventId:(int32_t)eventId title:(NSString *)title message:(NSString *)message __attribute__((swift_name("init(timestamp:feedbackId:eventId:title:message:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (DSDKNDFeedbackSharedNotification *)doCopyTimestamp:(int64_t)timestamp feedbackId:(NSString *)feedbackId eventId:(int32_t)eventId title:(NSString *)title message:(NSString *)message __attribute__((swift_name("doCopy(timestamp:feedbackId:eventId:title:message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t eventId __attribute__((swift_name("eventId")));
@property (readonly) NSString *feedbackId __attribute__((swift_name("feedbackId")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDFeedbackSharedNotification.Companion")))
@interface DSDKNDFeedbackSharedNotificationCompanion : DSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDNotification")))
@interface DSDKNDNotification : DSDKBase
- (instancetype)initWithTitle:(NSString *)title subTitle:(NSString *)subTitle notificationId:(NSString *)notificationId badge:(int32_t)badge __attribute__((swift_name("init(title:subTitle:notificationId:badge:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (int32_t)component4 __attribute__((swift_name("component4()")));
- (DSDKNDNotification *)doCopyTitle:(NSString *)title subTitle:(NSString *)subTitle notificationId:(NSString *)notificationId badge:(int32_t)badge __attribute__((swift_name("doCopy(title:subTitle:notificationId:badge:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJSONString __attribute__((swift_name("toJSONString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t badge __attribute__((swift_name("badge")));
@property (readonly) DSDKNDCommentNotification * _Nullable commentNotification __attribute__((swift_name("commentNotification")));
@property (readonly) DSDKNDEventAccessNotification * _Nullable eventAccessNotification __attribute__((swift_name("eventAccessNotification")));
@property (readonly) DSDKNDEventNotification * _Nullable eventNotification __attribute__((swift_name("eventNotification")));
@property (readonly) DSDKNDFeedbackSharedNotification * _Nullable feedbackSharedNotification __attribute__((swift_name("feedbackSharedNotification")));
@property (readonly) NSString *notificationId __attribute__((swift_name("notificationId")));
@property (readonly) NSString *subTitle __attribute__((swift_name("subTitle")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@property (readonly) DSDKNDWeeklyReviewNotification * _Nullable weeklyReviewNotification __attribute__((swift_name("weeklyReviewNotification")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDNotification.Companion")))
@interface DSDKNDNotificationCompanion : DSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDNotificationMessage")))
@interface DSDKNDNotificationMessage : DSDKBase
- (instancetype)initWithTimestamp:(int64_t)timestamp id:(NSString *)id isRead:(BOOL)isRead payload:(NSString *)payload __attribute__((swift_name("init(timestamp:id:isRead:payload:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (BOOL)component3 __attribute__((swift_name("component3()")));
- (DSDKNDNotificationMessage *)doCopyTimestamp:(int64_t)timestamp id:(NSString *)id isRead:(BOOL)isRead payload:(NSString *)payload __attribute__((swift_name("doCopy(timestamp:id:isRead:payload:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isRead __attribute__((swift_name("isRead")));
@property (readonly) DSDKNDNotification *notification __attribute__((swift_name("notification")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDNotificationMessage.Companion")))
@interface DSDKNDNotificationMessageCompanion : DSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDNotifications")))
@interface DSDKNDNotifications : DSDKBase
- (instancetype)initWithHasMoreNotifications:(BOOL)hasMoreNotifications unreadNotificationCount:(int32_t)unreadNotificationCount notifications:(NSArray<DSDKNDNotificationMessage *> * _Nullable)notifications __attribute__((swift_name("init(hasMoreNotifications:unreadNotificationCount:notifications:)"))) __attribute__((objc_designated_initializer));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (NSArray<DSDKNDNotificationMessage *> * _Nullable)component3 __attribute__((swift_name("component3()")));
- (DSDKNDNotifications *)doCopyHasMoreNotifications:(BOOL)hasMoreNotifications unreadNotificationCount:(int32_t)unreadNotificationCount notifications:(NSArray<DSDKNDNotificationMessage *> * _Nullable)notifications __attribute__((swift_name("doCopy(hasMoreNotifications:unreadNotificationCount:notifications:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJSONString __attribute__((swift_name("toJSONString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL hasMoreNotifications __attribute__((swift_name("hasMoreNotifications")));
@property (readonly) NSArray<DSDKNDNotificationMessage *> * _Nullable notifications __attribute__((swift_name("notifications")));
@property (readonly) int32_t unreadNotificationCount __attribute__((swift_name("unreadNotificationCount")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDNotifications.Companion")))
@interface DSDKNDNotificationsCompanion : DSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDNotificationsAPI")))
@interface DSDKNDNotificationsAPI : DSDKBase
- (void)cancel __attribute__((swift_name("cancel()")));
- (DSDKNDNotification * _Nullable)getNotificationData:(NSDictionary<NSString *, NSString *> *)data __attribute__((swift_name("getNotification(data:)")));
- (void)getNotificationsLoadMore:(BOOL)loadMore fetchOnlyUnread:(BOOL)fetchOnlyUnread callback:(void (^)(DSDKNDError * _Nullable, DSDKNDNotifications * _Nullable))callback __attribute__((swift_name("getNotifications(loadMore:fetchOnlyUnread:callback:)")));
- (void)doInitNotificationsCallback:(void (^)(DSDKNDError * _Nullable, DSDKBoolean *))callback __attribute__((swift_name("doInitNotifications(callback:)")));
- (BOOL)isNDNotificationData:(NSDictionary<NSString *, NSString *> *)data __attribute__((swift_name("isNDNotification(data:)")));
- (void)markAllNotificationsAsReadCallback:(void (^)(DSDKNDError * _Nullable, DSDKBoolean *))callback __attribute__((swift_name("markAllNotificationsAsRead(callback:)")));
- (void)markNotificationAsReadNotificationId:(NSString *)notificationId callback:(void (^)(DSDKNDError * _Nullable, DSDKBoolean *))callback __attribute__((swift_name("markNotificationAsRead(notificationId:callback:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDNotificationsAPI.Companion")))
@interface DSDKNDNotificationsAPICompanion : DSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) NSString *NOTIFICATION_RECEIVED_BROADCAST __attribute__((swift_name("NOTIFICATION_RECEIVED_BROADCAST")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDTrimmedVideoNotification")))
@interface DSDKNDTrimmedVideoNotification : DSDKBase
- (instancetype)initWithEventId:(int32_t)eventId url:(NSString *)url timestamp:(int64_t)timestamp requestId:(int32_t)requestId __attribute__((swift_name("init(eventId:url:timestamp:requestId:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (int64_t)component3 __attribute__((swift_name("component3()")));
- (int32_t)component4 __attribute__((swift_name("component4()")));
- (DSDKNDTrimmedVideoNotification *)doCopyEventId:(int32_t)eventId url:(NSString *)url timestamp:(int64_t)timestamp requestId:(int32_t)requestId __attribute__((swift_name("doCopy(eventId:url:timestamp:requestId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t eventId __attribute__((swift_name("eventId")));
@property (readonly) int32_t requestId __attribute__((swift_name("requestId")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDTrimmedVideoNotification.Companion")))
@interface DSDKNDTrimmedVideoNotificationCompanion : DSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDWeeklyReviewNotification")))
@interface DSDKNDWeeklyReviewNotification : DSDKBase
- (instancetype)initWithSessionId:(NSString *)sessionId timestamp:(int64_t)timestamp eventType:(NSString *)eventType driverStarsCount:(int32_t)driverStarsCount vcSessionAge:(int32_t)vcSessionAge __attribute__((swift_name("init(sessionId:timestamp:eventType:driverStarsCount:vcSessionAge:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (int32_t)component4 __attribute__((swift_name("component4()")));
- (DSDKNDWeeklyReviewNotification *)doCopySessionId:(NSString *)sessionId timestamp:(int64_t)timestamp eventType:(NSString *)eventType driverStarsCount:(int32_t)driverStarsCount vcSessionAge:(int32_t)vcSessionAge __attribute__((swift_name("doCopy(sessionId:timestamp:eventType:driverStarsCount:vcSessionAge:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t driverStarsCount __attribute__((swift_name("driverStarsCount")));
@property (readonly) NSString *eventType __attribute__((swift_name("eventType")));
@property (readonly) NSString *sessionId __attribute__((swift_name("sessionId")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDWeeklyReviewNotification.Companion")))
@interface DSDKNDWeeklyReviewNotificationCompanion : DSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NotificationTypes")))
@interface DSDKNotificationTypes : DSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NotificationTypes.Companion")))
@interface DSDKNotificationTypesCompanion : DSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) NSString *ALERT_CONVERTED_TO_DRIVER_STAR __attribute__((swift_name("ALERT_CONVERTED_TO_DRIVER_STAR")));
@property (readonly) NSString *DRIVERS_REPORT_JOB __attribute__((swift_name("DRIVERS_REPORT_JOB")));
@property (readonly) NSString *EVENT_ACCESS __attribute__((swift_name("EVENT_ACCESS")));
@property (readonly) NSString *EXECUTIVE_REPORTS_COMPLETED __attribute__((swift_name("EXECUTIVE_REPORTS_COMPLETED")));
@property (readonly) NSString *FEEDBACK_SHARED __attribute__((swift_name("FEEDBACK_SHARED")));
@property (readonly) NSString *NEW_ALERT_CREATED __attribute__((swift_name("NEW_ALERT_CREATED")));
@property (readonly) NSString *NEW_ALERT_SHARED __attribute__((swift_name("NEW_ALERT_SHARED")));
@property (readonly) NSString *NEW_COMMENT_ADDED __attribute__((swift_name("NEW_COMMENT_ADDED")));
@property (readonly) NSString *TRIMMED_VIDEO_REQUEST __attribute__((swift_name("TRIMMED_VIDEO_REQUEST")));
@property (readonly) NSString *UNKNOWN __attribute__((swift_name("UNKNOWN")));
@property (readonly) NSString *VIRTUAL_COACHING __attribute__((swift_name("VIRTUAL_COACHING")));
@property (readonly) NSString *VIRTUAL_COACHING_REMINDER __attribute__((swift_name("VIRTUAL_COACHING_REMINDER")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDEventAccessAPI")))
@interface DSDKNDEventAccessAPI : DSDKBase
- (void)cancel __attribute__((swift_name("cancel()")));
- (void)checkIfVideoConvertedToEventVideoId:(int32_t)videoId timestamp:(int64_t)timestamp callback:(void (^)(DSDKNDError * _Nullable, DSDKInt * _Nullable))callback __attribute__((swift_name("checkIfVideoConvertedToEvent(videoId:timestamp:callback:)")));
- (void)convertEventAccessVideoToEventVideoId:(int32_t)videoId requestId:(int32_t)requestId timestamp:(int64_t)timestamp requestStartTime:(int64_t)requestStartTime requestEndTime:(int64_t)requestEndTime callback:(void (^)(DSDKNDError * _Nullable, DSDKInt * _Nullable))callback __attribute__((swift_name("convertEventAccessVideoToEvent(videoId:requestId:timestamp:requestStartTime:requestEndTime:callback:)")));
- (void)createVideoUploadRequestVideoCatalogIds:(NSArray<DSDKInt *> *)videoCatalogIds callback:(void (^)(DSDKNDError * _Nullable, DSDKBoolean *))callback __attribute__((swift_name("createVideoUploadRequest(videoCatalogIds:callback:)")));
- (void)fetchEventAccessRequestDetailRequestId:(int32_t)requestId callback:(void (^)(DSDKNDError * _Nullable, DSDKNDEventAccessDetail * _Nullable))callback __attribute__((swift_name("fetchEventAccessRequestDetail(requestId:callback:)")));
- (void)getAssociatedVideosVideoCatalogId:(int32_t)videoCatalogId callback:(void (^)(DSDKNDError * _Nullable, NSArray<DSDKNDVideo *> * _Nullable))callback __attribute__((swift_name("getAssociatedVideos(videoCatalogId:callback:)")));
- (void)getEventAccessRequestsStartTime:(int64_t)startTime endTime:(int64_t)endTime callback:(void (^)(DSDKNDError * _Nullable, NSArray<DSDKNDEventAccessRequest *> * _Nullable))callback __attribute__((swift_name("getEventAccessRequests(startTime:endTime:callback:)")));
- (void)getVideoListFromDriveriForIntervalStartTime:(int64_t)startTime endTime:(int64_t)endTime callback:(void (^)(DSDKNDError * _Nullable, NSArray<DSDKNDVideoData *> * _Nullable))callback __attribute__((swift_name("getVideoListFromDriveriForInterval(startTime:endTime:callback:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDEventAccessDetail")))
@interface DSDKNDEventAccessDetail : DSDKBase
- (instancetype)initWithRequest:(DSDKNDEventAccessRequest *)request videos:(NSArray<DSDKNDVideo *> *)videos __attribute__((swift_name("init(request:videos:)"))) __attribute__((objc_designated_initializer));
- (DSDKNDEventAccessRequest *)component1 __attribute__((swift_name("component1()")));
- (NSArray<DSDKNDVideo *> *)component2 __attribute__((swift_name("component2()")));
- (DSDKNDEventAccessDetail *)doCopyRequest:(DSDKNDEventAccessRequest *)request videos:(NSArray<DSDKNDVideo *> *)videos __attribute__((swift_name("doCopy(request:videos:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJSONString __attribute__((swift_name("toJSONString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) DSDKNDEventAccessRequest *request __attribute__((swift_name("request")));
@property (readonly) NSArray<DSDKNDVideo *> *videos __attribute__((swift_name("videos")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDEventAccessDetail.Companion")))
@interface DSDKNDEventAccessDetailCompanion : DSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDEventAccessRequest")))
@interface DSDKNDEventAccessRequest : DSDKBase
- (instancetype)initWithRequestId:(int32_t)requestId createdAt:(int64_t)createdAt requestStartTime:(int64_t)requestStartTime requestEndTime:(int64_t)requestEndTime status:(int32_t)status videosRequested:(DSDKInt * _Nullable)videosRequested videosNotAvailable:(DSDKInt * _Nullable)videosNotAvailable deviceId:(NSString * _Nullable)deviceId vehicleNickName:(NSString * _Nullable)vehicleNickName __attribute__((swift_name("init(requestId:createdAt:requestStartTime:requestEndTime:status:videosRequested:videosNotAvailable:deviceId:vehicleNickName:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (int64_t)component3 __attribute__((swift_name("component3()")));
- (int64_t)component4 __attribute__((swift_name("component4()")));
- (DSDKInt * _Nullable)component6 __attribute__((swift_name("component6()")));
- (DSDKInt * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (DSDKNDEventAccessRequest *)doCopyRequestId:(int32_t)requestId createdAt:(int64_t)createdAt requestStartTime:(int64_t)requestStartTime requestEndTime:(int64_t)requestEndTime status:(int32_t)status videosRequested:(DSDKInt * _Nullable)videosRequested videosNotAvailable:(DSDKInt * _Nullable)videosNotAvailable deviceId:(NSString * _Nullable)deviceId vehicleNickName:(NSString * _Nullable)vehicleNickName __attribute__((swift_name("doCopy(requestId:createdAt:requestStartTime:requestEndTime:status:videosRequested:videosNotAvailable:deviceId:vehicleNickName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t createdAt __attribute__((swift_name("createdAt")));
@property (readonly) NSString * _Nullable deviceId __attribute__((swift_name("deviceId")));
@property (readonly) int64_t requestEndTime __attribute__((swift_name("requestEndTime")));
@property (readonly) int32_t requestId __attribute__((swift_name("requestId")));
@property (readonly) int64_t requestStartTime __attribute__((swift_name("requestStartTime")));
@property (readonly) NSString *requestStatus __attribute__((swift_name("requestStatus")));
@property (readonly) NSString * _Nullable vehicleNickName __attribute__((swift_name("vehicleNickName")));
@property (readonly) DSDKInt * _Nullable videosNotAvailable __attribute__((swift_name("videosNotAvailable")));
@property (readonly) int32_t videosProcessed __attribute__((swift_name("videosProcessed")));
@property (readonly) DSDKInt * _Nullable videosRequested __attribute__((swift_name("videosRequested")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDEventAccessRequest.Companion")))
@interface DSDKNDEventAccessRequestCompanion : DSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDEventAccessRequestSerializer")))
@interface DSDKNDEventAccessRequestSerializer : DSDKBase <DSDKKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)nDEventAccessRequestSerializer __attribute__((swift_name("init()")));
- (DSDKNDEventAccessRequest *)deserializeDecoder:(id<DSDKKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<DSDKKotlinx_serialization_coreEncoder>)encoder value:(DSDKNDEventAccessRequest *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<DSDKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDVideoData")))
@interface DSDKNDVideoData : DSDKBase
- (instancetype)initWithLatlong:(NSString * _Nullable)latlong videoAvailableOnDevice:(DSDKNDVideo * _Nullable)videoAvailableOnDevice deletedVideo:(DSDKNDVideo * _Nullable)deletedVideo vehicleNumber:(NSString * _Nullable)vehicleNumber endLatLong:(NSString * _Nullable)endLatLong maxSpeed:(DSDKDouble * _Nullable)maxSpeed minSpeed:(DSDKDouble * _Nullable)minSpeed deviceId:(NSString * _Nullable)deviceId ignitionStatus:(DSDKInt * _Nullable)ignitionStatus latlongs:(NSArray<NSString *> * _Nullable)latlongs __attribute__((swift_name("init(latlong:videoAvailableOnDevice:deletedVideo:vehicleNumber:endLatLong:maxSpeed:minSpeed:deviceId:ignitionStatus:latlongs:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (DSDKDouble * _Nullable)component6 __attribute__((swift_name("component6()")));
- (DSDKDouble * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (DSDKInt * _Nullable)component9 __attribute__((swift_name("component9()")));
- (DSDKNDVideoData *)doCopyLatlong:(NSString * _Nullable)latlong videoAvailableOnDevice:(DSDKNDVideo * _Nullable)videoAvailableOnDevice deletedVideo:(DSDKNDVideo * _Nullable)deletedVideo vehicleNumber:(NSString * _Nullable)vehicleNumber endLatLong:(NSString * _Nullable)endLatLong maxSpeed:(DSDKDouble * _Nullable)maxSpeed minSpeed:(DSDKDouble * _Nullable)minSpeed deviceId:(NSString * _Nullable)deviceId ignitionStatus:(DSDKInt * _Nullable)ignitionStatus latlongs:(NSArray<NSString *> * _Nullable)latlongs __attribute__((swift_name("doCopy(latlong:videoAvailableOnDevice:deletedVideo:vehicleNumber:endLatLong:maxSpeed:minSpeed:deviceId:ignitionStatus:latlongs:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJSONString __attribute__((swift_name("toJSONString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable deviceId __attribute__((swift_name("deviceId")));
@property (readonly) double endLatitude __attribute__((swift_name("endLatitude")));
@property (readonly) double endLongitude __attribute__((swift_name("endLongitude")));
@property (readonly) NSArray<DSDKNDVideoEvent *> * _Nullable eventsDetected __attribute__((swift_name("eventsDetected")));
@property (readonly) DSDKInt * _Nullable ignitionStatus __attribute__((swift_name("ignitionStatus")));
@property (readonly) NSArray<DSDKLatLong *> *latLongTrail __attribute__((swift_name("latLongTrail")));
@property (readonly) DSDKDouble * _Nullable maxSpeed __attribute__((swift_name("maxSpeed")));
@property (readonly) DSDKDouble * _Nullable minSpeed __attribute__((swift_name("minSpeed")));
@property (readonly) NSString *speedUnit __attribute__((swift_name("speedUnit")));
@property (readonly) double startLatitude __attribute__((swift_name("startLatitude")));
@property (readonly) double startLongitude __attribute__((swift_name("startLongitude")));
@property (readonly) NSString * _Nullable vehicleNumber __attribute__((swift_name("vehicleNumber")));
@property (readonly) DSDKNDVideo * _Nullable video __attribute__((swift_name("video")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDVideoData.Companion")))
@interface DSDKNDVideoDataCompanion : DSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDVideoEvent")))
@interface DSDKNDVideoEvent : DSDKBase
- (instancetype)initWithEventId:(int32_t)eventId eventType:(NSString *)eventType eventSeverity:(NSString *)eventSeverity startLatLong:(NSString * _Nullable)startLatLong __attribute__((swift_name("init(eventId:eventType:eventSeverity:startLatLong:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (DSDKNDVideoEvent *)doCopyEventId:(int32_t)eventId eventType:(NSString *)eventType eventSeverity:(NSString *)eventSeverity startLatLong:(NSString * _Nullable)startLatLong __attribute__((swift_name("doCopy(eventId:eventType:eventSeverity:startLatLong:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t eventId __attribute__((swift_name("eventId")));
@property (readonly) NSString *eventSeverity __attribute__((swift_name("eventSeverity")));
@property (readonly) NSString *eventType __attribute__((swift_name("eventType")));
@property (readonly) double startLatitude __attribute__((swift_name("startLatitude")));
@property (readonly) double startLongitude __attribute__((swift_name("startLongitude")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDVideoEvent.Companion")))
@interface DSDKNDVideoEventCompanion : DSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDAppBeaconAPI")))
@interface DSDKNDAppBeaconAPI : DSDKBase
- (void)cancel __attribute__((swift_name("cancel()")));
- (void)disableAppBeacon __attribute__((swift_name("disableAppBeacon()")));
- (NSString *)getCurrentLocationPermission __attribute__((swift_name("getCurrentLocationPermission()")));
- (void)handleLoginRequestFromDriveri __attribute__((swift_name("handleLoginRequestFromDriveri()")));
- (void)markAsNotDriving __attribute__((swift_name("markAsNotDriving()")));
- (void)startDriving __attribute__((swift_name("startDriving()")));
- (void)stopDriving __attribute__((swift_name("stopDriving()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDAppBeaconAPI.Companion")))
@interface DSDKNDAppBeaconAPICompanion : DSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) NSString *IOS_LOCATION_PERMISSION_ALWAYS __attribute__((swift_name("IOS_LOCATION_PERMISSION_ALWAYS")));
@property (readonly) NSString *IOS_LOCATION_PERMISSION_DENIED __attribute__((swift_name("IOS_LOCATION_PERMISSION_DENIED")));
@property (readonly) NSString *IOS_LOCATION_PERMISSION_WHEN_IN_USE __attribute__((swift_name("IOS_LOCATION_PERMISSION_WHEN_IN_USE")));
@property (readonly) NSString *LOCATION_PERMISSION_NOT_GRANTED_BROADCAST __attribute__((swift_name("LOCATION_PERMISSION_NOT_GRANTED_BROADCAST")));
@property (readonly) NSString *LOCATION_SERVICES_TURNED_OFF_BROADCAST __attribute__((swift_name("LOCATION_SERVICES_TURNED_OFF_BROADCAST")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDAppFeedback")))
@interface DSDKNDAppFeedback : DSDKBase
- (instancetype)initWithMessage:(NSString *)message image:(NSString *)image feedbackType:(DSDKNDFeedbackType *)feedbackType featureType:(DSDKNDFeature *)featureType __attribute__((swift_name("init(message:image:feedbackType:featureType:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (DSDKNDFeedbackType *)component3 __attribute__((swift_name("component3()")));
- (DSDKNDFeature *)component4 __attribute__((swift_name("component4()")));
- (DSDKNDAppFeedback *)doCopyMessage:(NSString *)message image:(NSString *)image feedbackType:(DSDKNDFeedbackType *)feedbackType featureType:(DSDKNDFeature *)featureType __attribute__((swift_name("doCopy(message:image:feedbackType:featureType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property DSDKNDFeature *featureType __attribute__((swift_name("featureType")));
@property DSDKNDFeedbackType *feedbackType __attribute__((swift_name("feedbackType")));
@property NSString *image __attribute__((swift_name("image")));
@property NSString *message __attribute__((swift_name("message")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDAppFeedback.Companion")))
@interface DSDKNDAppFeedbackCompanion : DSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol DSDKKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface DSDKKotlinEnum<E> : DSDKBase <DSDKKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDFeature")))
@interface DSDKNDFeature : DSDKKotlinEnum<DSDKNDFeature *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) DSDKNDFeature *events __attribute__((swift_name("events")));
@property (class, readonly) DSDKNDFeature *login __attribute__((swift_name("login")));
@property (class, readonly) DSDKNDFeature *eventfilters __attribute__((swift_name("eventfilters")));
@property (class, readonly) DSDKNDFeature *eventaccess __attribute__((swift_name("eventaccess")));
@property (class, readonly) DSDKNDFeature *weeklyreview __attribute__((swift_name("weeklyreview")));
@property (class, readonly) DSDKNDFeature *miscellaneous __attribute__((swift_name("miscellaneous")));
+ (DSDKKotlinArray<DSDKNDFeature *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDFeature.Companion")))
@interface DSDKNDFeatureCompanion : DSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDFeedbackType")))
@interface DSDKNDFeedbackType : DSDKKotlinEnum<DSDKNDFeedbackType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) DSDKNDFeedbackType *problem __attribute__((swift_name("problem")));
@property (class, readonly) DSDKNDFeedbackType *suggestion __attribute__((swift_name("suggestion")));
+ (DSDKKotlinArray<DSDKNDFeedbackType *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDFeedbackType.Companion")))
@interface DSDKNDFeedbackTypeCompanion : DSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DATA_RETENTION_ERROR_MSG")))
@interface DSDKDATA_RETENTION_ERROR_MSG : DSDKKotlinEnum<DSDKDATA_RETENTION_ERROR_MSG *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) DSDKDATA_RETENTION_ERROR_MSG *alerts __attribute__((swift_name("alerts")));
@property (class, readonly) DSDKDATA_RETENTION_ERROR_MSG *eventAccess __attribute__((swift_name("eventAccess")));
@property (class, readonly) DSDKDATA_RETENTION_ERROR_MSG *greenzone __attribute__((swift_name("greenzone")));
+ (DSDKKotlinArray<DSDKDATA_RETENTION_ERROR_MSG *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDUser")))
@interface DSDKNDUser : DSDKBase
- (instancetype)initWithEmail:(NSString * _Nullable)email roleType:(int32_t)roleType gamificationFlag:(DSDKBoolean * _Nullable)gamificationFlag productTierId:(DSDKInt * _Nullable)productTierId firstName:(NSString *)firstName lastName:(NSString *)lastName userName:(NSString *)userName tenantId:(int32_t)tenantId userId:(int32_t)userId driverId:(int32_t)driverId roleId:(int32_t)roleId roleName:(NSString *)roleName coachingModel:(NSString * _Nullable)coachingModel showWeeklyReviews:(DSDKBoolean * _Nullable)showWeeklyReviews hasAudioAccess:(DSDKBoolean * _Nullable)hasAudioAccess useAppAsBeacon:(DSDKBoolean * _Nullable)useAppAsBeacon multiDriverLoginEnabled:(DSDKBoolean * _Nullable)multiDriverLoginEnabled productTierApplyOn:(NSString * _Nullable)productTierApplyOn productTierConfig:(NSString * _Nullable)productTierConfig __attribute__((swift_name("init(email:roleType:gamificationFlag:productTierId:firstName:lastName:userName:tenantId:userId:driverId:roleId:roleName:coachingModel:showWeeklyReviews:hasAudioAccess:useAppAsBeacon:multiDriverLoginEnabled:productTierApplyOn:productTierConfig:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (int32_t)component10 __attribute__((swift_name("component10()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (int32_t)component9 __attribute__((swift_name("component9()")));
- (DSDKNDUser *)doCopyEmail:(NSString * _Nullable)email roleType:(int32_t)roleType gamificationFlag:(DSDKBoolean * _Nullable)gamificationFlag productTierId:(DSDKInt * _Nullable)productTierId firstName:(NSString *)firstName lastName:(NSString *)lastName userName:(NSString *)userName tenantId:(int32_t)tenantId userId:(int32_t)userId driverId:(int32_t)driverId roleId:(int32_t)roleId roleName:(NSString *)roleName coachingModel:(NSString * _Nullable)coachingModel showWeeklyReviews:(DSDKBoolean * _Nullable)showWeeklyReviews hasAudioAccess:(DSDKBoolean * _Nullable)hasAudioAccess useAppAsBeacon:(DSDKBoolean * _Nullable)useAppAsBeacon multiDriverLoginEnabled:(DSDKBoolean * _Nullable)multiDriverLoginEnabled productTierApplyOn:(NSString * _Nullable)productTierApplyOn productTierConfig:(NSString * _Nullable)productTierConfig __attribute__((swift_name("doCopy(email:roleType:gamificationFlag:productTierId:firstName:lastName:userName:tenantId:userId:driverId:roleId:roleName:coachingModel:showWeeklyReviews:hasAudioAccess:useAppAsBeacon:multiDriverLoginEnabled:productTierApplyOn:productTierConfig:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJsonString __attribute__((swift_name("toJsonString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t driverId __attribute__((swift_name("driverId")));
@property (readonly) NSString * _Nullable email __attribute__((swift_name("email")));
@property (readonly) NSString *firstName __attribute__((swift_name("firstName")));
@property BOOL isDriverAnonymizationEnabled __attribute__((swift_name("isDriverAnonymizationEnabled")));
@property int32_t isDriverReportVisible __attribute__((swift_name("isDriverReportVisible")));
@property BOOL isDriverStarEnabled __attribute__((swift_name("isDriverStarEnabled")));
@property (readonly) NSString *lastName __attribute__((swift_name("lastName")));
@property (readonly) int32_t userId __attribute__((swift_name("userId")));
@property (readonly) NSString *userName __attribute__((swift_name("userName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDUser.Companion")))
@interface DSDKNDUserCompanion : DSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDUserAPI")))
@interface DSDKNDUserAPI : DSDKBase
- (void)cancel __attribute__((swift_name("cancel()")));
- (void)changePasswordNewPassword:(NSString *)newPassword oldPassword:(NSString *)oldPassword callback:(void (^)(DSDKNDError * _Nullable))callback __attribute__((swift_name("changePassword(newPassword:oldPassword:callback:)")));
- (void)forgotPasswordUsername:(NSString *)username callback:(void (^)(DSDKNDError * _Nullable))callback __attribute__((swift_name("forgotPassword(username:callback:)")));
- (void)getAvailableEventTypesCallback:(void (^)(DSDKNDError * _Nullable, DSDKNDAvailableEventTypes * _Nullable))callback __attribute__((swift_name("getAvailableEventTypes(callback:)")));
- (void)getUserCallback:(void (^)(DSDKNDError * _Nullable, DSDKNDUser * _Nullable))callback __attribute__((swift_name("getUser(callback:)")));
- (void)getVODConsumptionCallback:(void (^)(DSDKNDError * _Nullable, DSDKNDVODConsumption * _Nullable))callback __attribute__((swift_name("getVODConsumption(callback:)")));
- (void)getVODConsumptionTenantId:(int32_t)tenantId callback:(void (^)(DSDKNDError * _Nullable, DSDKNDVODConsumption * _Nullable))callback __attribute__((swift_name("getVODConsumption(tenantId:callback:)")));
- (void)resetPasswordPassword:(NSString *)password token:(NSString *)token callback:(void (^)(DSDKNDError * _Nullable))callback __attribute__((swift_name("resetPassword(password:token:callback:)")));
- (void)submitFeedbackFeedback:(DSDKNDAppFeedback *)feedback callback:(void (^)(DSDKNDError * _Nullable))callback __attribute__((swift_name("submitFeedback(feedback:callback:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDVODConsumption")))
@interface DSDKNDVODConsumption : DSDKBase
- (instancetype)initWithCount:(int32_t)count eventVideoCount:(int32_t)eventVideoCount deviceCount:(int32_t)deviceCount eventAccessVideoCount:(int32_t)eventAccessVideoCount limit:(int32_t)limit warningThreshold:(float)warningThreshold __attribute__((swift_name("init(count:eventVideoCount:deviceCount:eventAccessVideoCount:limit:warningThreshold:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (int32_t)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (float)component6 __attribute__((swift_name("component6()")));
- (DSDKNDVODConsumption *)doCopyCount:(int32_t)count eventVideoCount:(int32_t)eventVideoCount deviceCount:(int32_t)deviceCount eventAccessVideoCount:(int32_t)eventAccessVideoCount limit:(int32_t)limit warningThreshold:(float)warningThreshold __attribute__((swift_name("doCopy(count:eventVideoCount:deviceCount:eventAccessVideoCount:limit:warningThreshold:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t count __attribute__((swift_name("count")));
@property (readonly) int32_t deviceCount __attribute__((swift_name("deviceCount")));
@property (readonly) int32_t eventAccessVideoCount __attribute__((swift_name("eventAccessVideoCount")));
@property (readonly) int32_t eventVideoCount __attribute__((swift_name("eventVideoCount")));
@property (readonly) int32_t limit __attribute__((swift_name("limit")));
@property (readonly) float warningThreshold __attribute__((swift_name("warningThreshold")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDVODConsumption.Companion")))
@interface DSDKNDVODConsumptionCompanion : DSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDEventFeedback")))
@interface DSDKNDEventFeedback : DSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property int32_t categoryId __attribute__((swift_name("categoryId")));
@property int32_t eventId __attribute__((swift_name("eventId")));
@property NSString *image __attribute__((swift_name("image")));
@property NSString *message __attribute__((swift_name("message")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDEventFeedback.Companion")))
@interface DSDKNDEventFeedbackCompanion : DSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDFeedbackCategory")))
@interface DSDKNDFeedbackCategory : DSDKBase
- (instancetype)initWithCategoryId:(int32_t)categoryId displayName:(NSString *)displayName __attribute__((swift_name("init(categoryId:displayName:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (DSDKNDFeedbackCategory *)doCopyCategoryId:(int32_t)categoryId displayName:(NSString *)displayName __attribute__((swift_name("doCopy(categoryId:displayName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJSONString __attribute__((swift_name("toJSONString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t categoryId __attribute__((swift_name("categoryId")));
@property (readonly) NSString *displayName __attribute__((swift_name("displayName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDFeedbackCategory.Companion")))
@interface DSDKNDFeedbackCategoryCompanion : DSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDFeedbackConversation")))
@interface DSDKNDFeedbackConversation : DSDKBase
- (instancetype)initWithImage:(NSString * _Nullable)image message:(NSString * _Nullable)message userId:(int32_t)userId timestamp:(DSDKLong * _Nullable)timestamp __attribute__((swift_name("init(image:message:userId:timestamp:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (DSDKLong * _Nullable)component4 __attribute__((swift_name("component4()")));
- (DSDKNDFeedbackConversation *)doCopyImage:(NSString * _Nullable)image message:(NSString * _Nullable)message userId:(int32_t)userId timestamp:(DSDKLong * _Nullable)timestamp __attribute__((swift_name("doCopy(image:message:userId:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJSONString __attribute__((swift_name("toJSONString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable image __attribute__((swift_name("image")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@property (readonly) DSDKLong * _Nullable timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t userId __attribute__((swift_name("userId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDFeedbackConversation.Companion")))
@interface DSDKNDFeedbackConversationCompanion : DSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDFeedbackState")))
@interface DSDKNDFeedbackState : DSDKBase
- (instancetype)initWithFeedbackMessageState:(NSString *)feedbackMessageState categoryDisplayName:(NSString *)categoryDisplayName feedbackId:(NSString * _Nullable)feedbackId categoryId:(int32_t)categoryId __attribute__((swift_name("init(feedbackMessageState:categoryDisplayName:feedbackId:categoryId:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (int32_t)component4 __attribute__((swift_name("component4()")));
- (DSDKNDFeedbackState *)doCopyFeedbackMessageState:(NSString *)feedbackMessageState categoryDisplayName:(NSString *)categoryDisplayName feedbackId:(NSString * _Nullable)feedbackId categoryId:(int32_t)categoryId __attribute__((swift_name("doCopy(feedbackMessageState:categoryDisplayName:feedbackId:categoryId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toJSONString __attribute__((swift_name("toJSONString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *categoryDisplayName __attribute__((swift_name("categoryDisplayName")));
@property (readonly) int32_t categoryId __attribute__((swift_name("categoryId")));
@property (readonly) NSString * _Nullable feedbackId __attribute__((swift_name("feedbackId")));
@property (readonly) NSString *feedbackMessageState __attribute__((swift_name("feedbackMessageState")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDFeedbackState.Companion")))
@interface DSDKNDFeedbackStateCompanion : DSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<DSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDErrorKt")))
@interface DSDKNDErrorKt : DSDKBase
@property (class, readonly) int32_t AUTHENTICATION_ERROR __attribute__((swift_name("AUTHENTICATION_ERROR")));
@property (class, readonly) int32_t BAD_REQUEST __attribute__((swift_name("BAD_REQUEST")));
@property (class, readonly) int32_t CONTENT_NOT_ACCESSIBLE __attribute__((swift_name("CONTENT_NOT_ACCESSIBLE")));
@property (class, readonly) int32_t FEATURE_NOT_AVAILABLE __attribute__((swift_name("FEATURE_NOT_AVAILABLE")));
@property (class, readonly) int32_t FORBIDDEN_RESOURCE __attribute__((swift_name("FORBIDDEN_RESOURCE")));
@property (class, readonly) int32_t INTERNAL_SERVER_ERROR __attribute__((swift_name("INTERNAL_SERVER_ERROR")));
@property (class, readonly) int32_t INVALID_DATA __attribute__((swift_name("INVALID_DATA")));
@property (class, readonly) int32_t INVALID_TIMESTAMP_FOR_GZ_INTERVAL __attribute__((swift_name("INVALID_TIMESTAMP_FOR_GZ_INTERVAL")));
@property (class, readonly) int32_t NETWORK_UNAVAILABLE __attribute__((swift_name("NETWORK_UNAVAILABLE")));
@property (class, readonly) int32_t NOT_AUTHENTICATED __attribute__((swift_name("NOT_AUTHENTICATED")));
@property (class, readonly) int32_t NOT_AUTHORIZED __attribute__((swift_name("NOT_AUTHORIZED")));
@property (class, readonly) int32_t NOT_DRIVER_USER __attribute__((swift_name("NOT_DRIVER_USER")));
@property (class, readonly) int32_t REQUEST_EXPIRED __attribute__((swift_name("REQUEST_EXPIRED")));
@property (class, readonly) int32_t RESOURCE_NOT_FOUND __attribute__((swift_name("RESOURCE_NOT_FOUND")));
@property (class, readonly) int32_t UNKNOWN_ERROR __attribute__((swift_name("UNKNOWN_ERROR")));
@property (class, readonly) int32_t USER_NOT_INITIALIZED __attribute__((swift_name("USER_NOT_INITIALIZED")));
@property (class, readonly) int32_t USER_SESSION_EXPIRED __attribute__((swift_name("USER_SESSION_EXPIRED")));
@property (class, readonly) int32_t VOD_LIMIT_EXHAUSTED __attribute__((swift_name("VOD_LIMIT_EXHAUSTED")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InternalAPIsKt")))
@interface DSDKInternalAPIsKt : DSDKBase
+ (void)apiEnvEnv:(NSString *)env __attribute__((swift_name("apiEnv(env:)")));
+ (DSDKNDAPIClient * _Nullable)getAPIClient __attribute__((swift_name("getAPIClient()")));
+ (NSString *)getAccessToken __attribute__((swift_name("getAccessToken()")));
+ (void)getEventAccessRequestsForSMStartTime:(int64_t)startTime endTime:(int64_t)endTime tenantId:(int32_t)tenantId callback:(void (^)(DSDKNDError * _Nullable, NSArray<DSDKNDEventAccessRequest *> * _Nullable))callback __attribute__((swift_name("getEventAccessRequestsForSM(startTime:endTime:tenantId:callback:)")));
+ (DSDKNDNotificationsAPI * _Nullable)getNotificationsAPI __attribute__((swift_name("getNotificationsAPI()")));
+ (NSString *)getRefreshToken __attribute__((swift_name("getRefreshToken()")));
+ (void)getVideoListByVehicleIdStartTime:(int64_t)startTime endTime:(int64_t)endTime vehicleId:(int32_t)vehicleId callback:(void (^)(DSDKNDError * _Nullable, NSArray<DSDKNDVideoData *> * _Nullable))callback __attribute__((swift_name("getVideoListByVehicleId(startTime:endTime:vehicleId:callback:)")));
+ (void)logMsg:(NSString *)msg __attribute__((swift_name("log(msg:)")));
+ (void)setAccessTokenAccessToken:(NSString *)accessToken __attribute__((swift_name("setAccessToken(accessToken:)")));
+ (void)setRefreshTokenRefreshToken:(NSString *)refreshToken __attribute__((swift_name("setRefreshToken(refreshToken:)")));
+ (void)uploadLogs __attribute__((swift_name("uploadLogs()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDEventCommentKt")))
@interface DSDKNDEventCommentKt : DSDKBase
+ (NSString *)toJSONString:(NSArray<DSDKNDEventComment *> *)receiver __attribute__((swift_name("toJSONString(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDWeeklyReviewSessionKt")))
@interface DSDKNDWeeklyReviewSessionKt : DSDKBase
+ (NSString *)toJSONString:(NSArray<DSDKNDWeeklyReviewSession *> *)receiver __attribute__((swift_name("toJSONString(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDVideoKt")))
@interface DSDKNDVideoKt : DSDKBase
+ (NSString *)toJSONString:(NSArray<DSDKNDVideo *> *)receiver __attribute__((swift_name("toJSONString(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FCMNotificationsKt")))
@interface DSDKFCMNotificationsKt : DSDKBase
@property (class, readonly) NSString *TAG __attribute__((swift_name("TAG")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDNotificationMessageKt")))
@interface DSDKNDNotificationMessageKt : DSDKBase
+ (NSString *)toJSONString:(NSArray<DSDKNDNotificationMessage *> *)receiver __attribute__((swift_name("toJSONString(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDVideoDataKt")))
@interface DSDKNDVideoDataKt : DSDKBase
+ (NSString *)toJSONString:(NSArray<DSDKNDVideoData *> *)receiver __attribute__((swift_name("toJSONString(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDEventAccessRequestKt")))
@interface DSDKNDEventAccessRequestKt : DSDKBase
+ (NSString *)toJsonString:(NSArray<DSDKNDEventAccessRequest *> *)receiver __attribute__((swift_name("toJsonString(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDAppBeaconAPIKt")))
@interface DSDKNDAppBeaconAPIKt : DSDKBase
@property (class, readonly) NSString *kBluetoothOffNotification __attribute__((swift_name("kBluetoothOffNotification")));
@property (class, readonly) NSString *kBluetoothOnNotification __attribute__((swift_name("kBluetoothOnNotification")));
@property (class, readonly) NSString *kInsufficientLocationPermission __attribute__((swift_name("kInsufficientLocationPermission")));
@property (class, readonly) NSString *kLocationPermissionChangedNotification __attribute__((swift_name("kLocationPermissionChangedNotification")));
@property (class, readonly) NSString *kNeedBluetoothAccessNotification __attribute__((swift_name("kNeedBluetoothAccessNotification")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDFeedbackCategoryKt")))
@interface DSDKNDFeedbackCategoryKt : DSDKBase
+ (NSString *)toJSONString:(NSArray<DSDKNDFeedbackCategory *> *)receiver __attribute__((swift_name("toJSONString(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDFeedbackConversationKt")))
@interface DSDKNDFeedbackConversationKt : DSDKBase
+ (NSString *)toJSONString:(NSArray<DSDKNDFeedbackConversation *> *)receiver __attribute__((swift_name("toJSONString(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NDFeedbackStateKt")))
@interface DSDKNDFeedbackStateKt : DSDKBase
+ (NSString *)toJSONString:(NSArray<DSDKNDFeedbackState *> *)receiver __attribute__((swift_name("toJSONString(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface DSDKKotlinNothing : DSDKBase
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol DSDKKotlinx_serialization_coreEncoder
@required
- (id<DSDKKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<DSDKKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<DSDKKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<DSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<DSDKKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<DSDKKotlinx_serialization_coreEncoder>)encodeInlineInlineDescriptor:(id<DSDKKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("encodeInline(inlineDescriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<DSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<DSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) DSDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol DSDKKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<DSDKKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<DSDKKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<DSDKKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) DSDKKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol DSDKKotlinx_serialization_coreDecoder
@required
- (id<DSDKKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<DSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<DSDKKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<DSDKKotlinx_serialization_coreDecoder>)decodeInlineInlineDescriptor:(id<DSDKKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("decodeInline(inlineDescriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (DSDKKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<DSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<DSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) DSDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface DSDKKotlinArray<T> : DSDKBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(DSDKInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<DSDKKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol DSDKKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<DSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<DSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<DSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<DSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<DSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<DSDKKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<DSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<DSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<DSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<DSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<DSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<DSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<DSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<DSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<DSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<DSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<DSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) DSDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface DSDKKotlinx_serialization_coreSerializersModule : DSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)dumpToCollector:(id<DSDKKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<DSDKKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<DSDKKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<DSDKKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));
- (id<DSDKKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<DSDKKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<DSDKKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<DSDKKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol DSDKKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface DSDKKotlinx_serialization_coreSerialKind : DSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol DSDKKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<DSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<DSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<DSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<DSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<DSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<DSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<DSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<DSDKKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<DSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<DSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<DSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<DSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<DSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<DSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<DSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<DSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<DSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<DSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) DSDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol DSDKKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol DSDKKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<DSDKKotlinKClass>)kClass provider:(id<DSDKKotlinx_serialization_coreKSerializer> (^)(NSArray<id<DSDKKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<DSDKKotlinKClass>)kClass serializer:(id<DSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<DSDKKotlinKClass>)baseClass actualClass:(id<DSDKKotlinKClass>)actualClass actualSerializer:(id<DSDKKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<DSDKKotlinKClass>)baseClass defaultSerializerProvider:(id<DSDKKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultSerializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol DSDKKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol DSDKKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol DSDKKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol DSDKKotlinKClass <DSDKKotlinKDeclarationContainer, DSDKKotlinKAnnotatedElement, DSDKKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
