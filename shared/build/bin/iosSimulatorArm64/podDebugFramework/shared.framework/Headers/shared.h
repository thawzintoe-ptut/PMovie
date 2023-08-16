#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class UIViewController, SharedMaterial3ColorScheme, SharedMaterial3Typography, SharedUi_textTextStyle, SharedUi_textFontWeight, SharedUi_textFontFamily, SharedUi_textTextGeometricTransform, SharedUi_textLocaleList, SharedUi_textTextDecoration, SharedUi_graphicsShadow, SharedUi_textTextIndent, SharedUi_textPlatformTextStyle, SharedUi_textLineHeightStyle, SharedUi_graphicsDrawStyle, SharedUi_textTextMotion, SharedUi_graphicsBrush, SharedUi_textTextStyleCompanion, SharedUi_textParagraphStyle, SharedUi_textSpanStyle, SharedUi_textFontWeightCompanion, SharedUi_textFontFamilyCompanion, SharedUi_textTextGeometricTransformCompanion, SharedUi_textLocale, SharedKotlinArray<T>, SharedUi_textLocaleListCompanion, SharedUi_textTextDecorationCompanion, SharedUi_graphicsShadowCompanion, SharedUi_textTextIndentCompanion, SharedUi_textPlatformSpanStyle, SharedUi_textPlatformParagraphStyle, SharedUi_textLineHeightStyleCompanion, SharedUi_textTextMotionCompanion, SharedUi_graphicsBrushCompanion, SharedUi_textGenericFontFamily, SharedUi_textSystemFontFamily, SharedUi_textLocaleCompanion, SharedUi_textPlatformSpanStyleCompanion, SharedUi_textPlatformParagraphStyleCompanion, SharedKotlinPair<__covariant A, __covariant B>, SharedSkikoPaint, SharedUi_graphicsColorFilter, SharedSkikoShader, SharedSkikoNativeCompanion, SharedSkikoNative, SharedSkikoManaged, SharedSkikoPaintCompanion, SharedSkikoColor4f, SharedSkikoColorSpace, SharedSkikoBlendMode, SharedSkikoColorFilter, SharedSkikoImageFilter, SharedSkikoMaskFilter, SharedSkikoPaintMode, SharedSkikoPathEffect, SharedSkikoPaintStrokeCap, SharedSkikoPaintStrokeJoin, SharedUi_graphicsColorFilterCompanion, SharedSkikoRefCnt, SharedSkikoShaderCompanion, SharedKotlinFloatArray, SharedSkikoColor4fCompanion, SharedSkikoColorSpaceCompanion, SharedKotlinEnumCompanion, SharedKotlinEnum<E>, SharedSkikoColorFilterCompanion, SharedSkikoImageFilterCompanion, SharedSkikoMaskFilterCompanion, SharedSkikoPathEffectCompanion, SharedSkikoISize, SharedSkikoGradientStyle, SharedKotlinIntArray, SharedSkikoPoint, SharedKotlinFloatIterator, SharedSkikoColorMatrix, SharedSkikoInversionMode, SharedKotlinByteArray, SharedSkikoRegion, SharedSkikoIRect, SharedSkikoFilterTileMode, SharedSkikoColorChannel, SharedSkikoImage, SharedSkikoRect, SharedSkikoMatrix33, SharedSkikoRuntimeShaderBuilder, SharedSkikoFilterBlurMode, SharedSkikoPath, SharedSkikoPathEffectStyle, SharedSkikoISizeCompanion, SharedSkikoGradientStyleCompanion, SharedKotlinIntIterator, SharedSkikoPointCompanion, SharedKotlinByteIterator, SharedSkikoRegionCompanion, SharedSkikoRegionOp, SharedSkikoIRectCompanion, SharedSkikoIPoint, SharedSkikoColorAlphaType, SharedSkikoColorInfo, SharedSkikoColorType, SharedSkikoImageInfo, SharedSkikoImageCompanion, SharedSkikoData, SharedSkikoEncodedImageFormat, SharedSkikoPixmap, SharedSkikoBitmap, SharedSkikoDirectContext, SharedSkikoRectCompanion, SharedSkikoMatrix33Companion, SharedSkikoMatrix44, SharedSkikoRuntimeEffect, SharedSkikoRuntimeShaderBuilderCompanion, SharedSkikoMatrix22, SharedSkikoPathCompanion, SharedSkikoPathDirection, SharedSkikoRRect, SharedSkikoPathEllipseArc, SharedSkikoPathVerb, SharedSkikoPathSegmentIterator, SharedSkikoPathFillMode, SharedSkikoRegionOpCompanion, SharedSkikoIPointCompanion, SharedSkikoColorInfoCompanion, SharedSkikoColorTypeCompanion, SharedSkikoImageInfoCompanion, SharedSkikoDataCompanion, SharedSkikoPixmapCompanion, SharedSkikoBitmapCompanion, SharedSkikoPixelRef, SharedSkikoDirectContextCompanion, SharedSkikoGLBackendState, SharedSkikoMatrix44Companion, SharedSkikoRuntimeEffectCompanion, SharedSkikoMatrix22Companion, SharedSkikoPathOp, SharedSkikoRRectCompanion, SharedSkikoPathSegmentIteratorCompanion, SharedSkikoPathSegment, SharedSkikoPixelRefCompanion;

@protocol SharedKotlinComparable, SharedKotlinIterator, SharedKotlinIterable, SharedKotlinCollection, SharedUi_graphicsPaint, SharedUi_graphicsPathEffect, SharedSkikoSamplingMode, SharedSkikoIHasImageInfo, SharedKotlinMutableIterator;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface SharedBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface SharedBase (SharedBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface SharedMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface SharedMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorSharedKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface SharedNumber : NSNumber
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
@end

__attribute__((swift_name("KotlinByte")))
@interface SharedByte : SharedNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface SharedUByte : SharedNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface SharedShort : SharedNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface SharedUShort : SharedNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface SharedInt : SharedNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface SharedUInt : SharedNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface SharedLong : SharedNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface SharedULong : SharedNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface SharedFloat : SharedNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface SharedDouble : SharedNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface SharedBoolean : SharedNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MainKt")))
@interface SharedMainKt : SharedBase
+ (UIViewController *)MainViewController __attribute__((swift_name("MainViewController()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformKt")))
@interface SharedPlatformKt : SharedBase
+ (NSString *)getPlatformName __attribute__((swift_name("getPlatformName()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ColorKt")))
@interface SharedColorKt : SharedBase
@property (class, readonly) uint64_t BackgroundDark __attribute__((swift_name("BackgroundDark")));
@property (class, readonly) uint64_t BackgroundLight __attribute__((swift_name("BackgroundLight")));
@property (class, readonly) uint64_t ErrorContainerDark __attribute__((swift_name("ErrorContainerDark")));
@property (class, readonly) uint64_t ErrorContainerLight __attribute__((swift_name("ErrorContainerLight")));
@property (class, readonly) uint64_t ErrorDark __attribute__((swift_name("ErrorDark")));
@property (class, readonly) uint64_t ErrorLight __attribute__((swift_name("ErrorLight")));
@property (class, readonly) uint64_t GreenContainerDark __attribute__((swift_name("GreenContainerDark")));
@property (class, readonly) uint64_t GreenContainerLight __attribute__((swift_name("GreenContainerLight")));
@property (class, readonly) uint64_t GreenPrimaryDark __attribute__((swift_name("GreenPrimaryDark")));
@property (class, readonly) uint64_t GreenPrimaryLight __attribute__((swift_name("GreenPrimaryLight")));
@property (class, readonly) uint64_t GreenSecondaryContainerDark __attribute__((swift_name("GreenSecondaryContainerDark")));
@property (class, readonly) uint64_t GreenSecondaryContainerLight __attribute__((swift_name("GreenSecondaryContainerLight")));
@property (class, readonly) uint64_t GreenSecondaryDark __attribute__((swift_name("GreenSecondaryDark")));
@property (class, readonly) uint64_t GreenSecondaryLight __attribute__((swift_name("GreenSecondaryLight")));
@property (class, readonly) uint64_t GreenTertiaryContainerDark __attribute__((swift_name("GreenTertiaryContainerDark")));
@property (class, readonly) uint64_t GreenTertiaryContainerLight __attribute__((swift_name("GreenTertiaryContainerLight")));
@property (class, readonly) uint64_t GreenTertiaryDark __attribute__((swift_name("GreenTertiaryDark")));
@property (class, readonly) uint64_t GreenTertiaryLight __attribute__((swift_name("GreenTertiaryLight")));
@property (class, readonly) uint64_t OnBackgroundDark __attribute__((swift_name("OnBackgroundDark")));
@property (class, readonly) uint64_t OnBackgroundLight __attribute__((swift_name("OnBackgroundLight")));
@property (class, readonly) uint64_t OnErrorContainerDark __attribute__((swift_name("OnErrorContainerDark")));
@property (class, readonly) uint64_t OnErrorContainerLight __attribute__((swift_name("OnErrorContainerLight")));
@property (class, readonly) uint64_t OnErrorDark __attribute__((swift_name("OnErrorDark")));
@property (class, readonly) uint64_t OnErrorLight __attribute__((swift_name("OnErrorLight")));
@property (class, readonly) uint64_t OnGreenContainerDark __attribute__((swift_name("OnGreenContainerDark")));
@property (class, readonly) uint64_t OnGreenContainerLight __attribute__((swift_name("OnGreenContainerLight")));
@property (class, readonly) uint64_t OnGreenDark __attribute__((swift_name("OnGreenDark")));
@property (class, readonly) uint64_t OnGreenLight __attribute__((swift_name("OnGreenLight")));
@property (class, readonly) uint64_t OnGreenSecondaryContainerDark __attribute__((swift_name("OnGreenSecondaryContainerDark")));
@property (class, readonly) uint64_t OnGreenSecondaryContainerLight __attribute__((swift_name("OnGreenSecondaryContainerLight")));
@property (class, readonly) uint64_t OnGreenSecondaryDark __attribute__((swift_name("OnGreenSecondaryDark")));
@property (class, readonly) uint64_t OnGreenSecondaryLight __attribute__((swift_name("OnGreenSecondaryLight")));
@property (class, readonly) uint64_t OnGreenTertiaryContainerDark __attribute__((swift_name("OnGreenTertiaryContainerDark")));
@property (class, readonly) uint64_t OnGreenTertiaryContainerLight __attribute__((swift_name("OnGreenTertiaryContainerLight")));
@property (class, readonly) uint64_t OnGreenTertiaryDark __attribute__((swift_name("OnGreenTertiaryDark")));
@property (class, readonly) uint64_t OnGreenTertiaryLight __attribute__((swift_name("OnGreenTertiaryLight")));
@property (class, readonly) uint64_t OnSurfaceDark __attribute__((swift_name("OnSurfaceDark")));
@property (class, readonly) uint64_t OnSurfaceLight __attribute__((swift_name("OnSurfaceLight")));
@property (class, readonly) uint64_t OnSurfaceVariantDark __attribute__((swift_name("OnSurfaceVariantDark")));
@property (class, readonly) uint64_t OnSurfaceVariantLight __attribute__((swift_name("OnSurfaceVariantLight")));
@property (class, readonly) uint64_t OutlineDark __attribute__((swift_name("OutlineDark")));
@property (class, readonly) uint64_t OutlineLight __attribute__((swift_name("OutlineLight")));
@property (class, readonly) uint64_t SurfaceDark __attribute__((swift_name("SurfaceDark")));
@property (class, readonly) uint64_t SurfaceLight __attribute__((swift_name("SurfaceLight")));
@property (class, readonly) uint64_t SurfaceVariantDark __attribute__((swift_name("SurfaceVariantDark")));
@property (class, readonly) uint64_t SurfaceVariantLight __attribute__((swift_name("SurfaceVariantLight")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThemeKt")))
@interface SharedThemeKt : SharedBase
@property (class, readonly) SharedMaterial3ColorScheme *DarkColorScheme __attribute__((swift_name("DarkColorScheme")));
@property (class, readonly) SharedMaterial3ColorScheme *LightColorScheme __attribute__((swift_name("LightColorScheme")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TypeKt")))
@interface SharedTypeKt : SharedBase
@property (class, readonly) SharedMaterial3Typography *Typography __attribute__((swift_name("Typography")));
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Material3ColorScheme")))
@interface SharedMaterial3ColorScheme : SharedBase
- (instancetype)initWithPrimary:(uint64_t)primary onPrimary:(uint64_t)onPrimary primaryContainer:(uint64_t)primaryContainer onPrimaryContainer:(uint64_t)onPrimaryContainer inversePrimary:(uint64_t)inversePrimary secondary:(uint64_t)secondary onSecondary:(uint64_t)onSecondary secondaryContainer:(uint64_t)secondaryContainer onSecondaryContainer:(uint64_t)onSecondaryContainer tertiary:(uint64_t)tertiary onTertiary:(uint64_t)onTertiary tertiaryContainer:(uint64_t)tertiaryContainer onTertiaryContainer:(uint64_t)onTertiaryContainer background:(uint64_t)background onBackground:(uint64_t)onBackground surface:(uint64_t)surface onSurface:(uint64_t)onSurface surfaceVariant:(uint64_t)surfaceVariant onSurfaceVariant:(uint64_t)onSurfaceVariant surfaceTint:(uint64_t)surfaceTint inverseSurface:(uint64_t)inverseSurface inverseOnSurface:(uint64_t)inverseOnSurface error:(uint64_t)error onError:(uint64_t)onError errorContainer:(uint64_t)errorContainer onErrorContainer:(uint64_t)onErrorContainer outline:(uint64_t)outline outlineVariant:(uint64_t)outlineVariant scrim:(uint64_t)scrim __attribute__((swift_name("init(primary:onPrimary:primaryContainer:onPrimaryContainer:inversePrimary:secondary:onSecondary:secondaryContainer:onSecondaryContainer:tertiary:onTertiary:tertiaryContainer:onTertiaryContainer:background:onBackground:surface:onSurface:surfaceVariant:onSurfaceVariant:surfaceTint:inverseSurface:inverseOnSurface:error:onError:errorContainer:onErrorContainer:outline:outlineVariant:scrim:)"))) __attribute__((objc_designated_initializer));
- (SharedMaterial3ColorScheme *)doCopyPrimary:(uint64_t)primary onPrimary:(uint64_t)onPrimary primaryContainer:(uint64_t)primaryContainer onPrimaryContainer:(uint64_t)onPrimaryContainer inversePrimary:(uint64_t)inversePrimary secondary:(uint64_t)secondary onSecondary:(uint64_t)onSecondary secondaryContainer:(uint64_t)secondaryContainer onSecondaryContainer:(uint64_t)onSecondaryContainer tertiary:(uint64_t)tertiary onTertiary:(uint64_t)onTertiary tertiaryContainer:(uint64_t)tertiaryContainer onTertiaryContainer:(uint64_t)onTertiaryContainer background:(uint64_t)background onBackground:(uint64_t)onBackground surface:(uint64_t)surface onSurface:(uint64_t)onSurface surfaceVariant:(uint64_t)surfaceVariant onSurfaceVariant:(uint64_t)onSurfaceVariant surfaceTint:(uint64_t)surfaceTint inverseSurface:(uint64_t)inverseSurface inverseOnSurface:(uint64_t)inverseOnSurface error:(uint64_t)error onError:(uint64_t)onError errorContainer:(uint64_t)errorContainer onErrorContainer:(uint64_t)onErrorContainer outline:(uint64_t)outline outlineVariant:(uint64_t)outlineVariant scrim:(uint64_t)scrim __attribute__((swift_name("doCopy(primary:onPrimary:primaryContainer:onPrimaryContainer:inversePrimary:secondary:onSecondary:secondaryContainer:onSecondaryContainer:tertiary:onTertiary:tertiaryContainer:onTertiaryContainer:background:onBackground:surface:onSurface:surfaceVariant:onSurfaceVariant:surfaceTint:inverseSurface:inverseOnSurface:error:onError:errorContainer:onErrorContainer:outline:outlineVariant:scrim:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) uint64_t background __attribute__((swift_name("background")));
@property (readonly) uint64_t error __attribute__((swift_name("error")));
@property (readonly) uint64_t errorContainer __attribute__((swift_name("errorContainer")));
@property (readonly) uint64_t inverseOnSurface __attribute__((swift_name("inverseOnSurface")));
@property (readonly) uint64_t inversePrimary __attribute__((swift_name("inversePrimary")));
@property (readonly) uint64_t inverseSurface __attribute__((swift_name("inverseSurface")));
@property (readonly) uint64_t onBackground __attribute__((swift_name("onBackground")));
@property (readonly) uint64_t onError __attribute__((swift_name("onError")));
@property (readonly) uint64_t onErrorContainer __attribute__((swift_name("onErrorContainer")));
@property (readonly) uint64_t onPrimary __attribute__((swift_name("onPrimary")));
@property (readonly) uint64_t onPrimaryContainer __attribute__((swift_name("onPrimaryContainer")));
@property (readonly) uint64_t onSecondary __attribute__((swift_name("onSecondary")));
@property (readonly) uint64_t onSecondaryContainer __attribute__((swift_name("onSecondaryContainer")));
@property (readonly) uint64_t onSurface __attribute__((swift_name("onSurface")));
@property (readonly) uint64_t onSurfaceVariant __attribute__((swift_name("onSurfaceVariant")));
@property (readonly) uint64_t onTertiary __attribute__((swift_name("onTertiary")));
@property (readonly) uint64_t onTertiaryContainer __attribute__((swift_name("onTertiaryContainer")));
@property (readonly) uint64_t outline __attribute__((swift_name("outline")));
@property (readonly) uint64_t outlineVariant __attribute__((swift_name("outlineVariant")));
@property (readonly) uint64_t primary __attribute__((swift_name("primary")));
@property (readonly) uint64_t primaryContainer __attribute__((swift_name("primaryContainer")));
@property (readonly) uint64_t scrim __attribute__((swift_name("scrim")));
@property (readonly) uint64_t secondary __attribute__((swift_name("secondary")));
@property (readonly) uint64_t secondaryContainer __attribute__((swift_name("secondaryContainer")));
@property (readonly) uint64_t surface __attribute__((swift_name("surface")));
@property (readonly) uint64_t surfaceTint __attribute__((swift_name("surfaceTint")));
@property (readonly) uint64_t surfaceVariant __attribute__((swift_name("surfaceVariant")));
@property (readonly) uint64_t tertiary __attribute__((swift_name("tertiary")));
@property (readonly) uint64_t tertiaryContainer __attribute__((swift_name("tertiaryContainer")));
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Material3Typography")))
@interface SharedMaterial3Typography : SharedBase
- (instancetype)initWithDisplayLarge:(SharedUi_textTextStyle *)displayLarge displayMedium:(SharedUi_textTextStyle *)displayMedium displaySmall:(SharedUi_textTextStyle *)displaySmall headlineLarge:(SharedUi_textTextStyle *)headlineLarge headlineMedium:(SharedUi_textTextStyle *)headlineMedium headlineSmall:(SharedUi_textTextStyle *)headlineSmall titleLarge:(SharedUi_textTextStyle *)titleLarge titleMedium:(SharedUi_textTextStyle *)titleMedium titleSmall:(SharedUi_textTextStyle *)titleSmall bodyLarge:(SharedUi_textTextStyle *)bodyLarge bodyMedium:(SharedUi_textTextStyle *)bodyMedium bodySmall:(SharedUi_textTextStyle *)bodySmall labelLarge:(SharedUi_textTextStyle *)labelLarge labelMedium:(SharedUi_textTextStyle *)labelMedium labelSmall:(SharedUi_textTextStyle *)labelSmall __attribute__((swift_name("init(displayLarge:displayMedium:displaySmall:headlineLarge:headlineMedium:headlineSmall:titleLarge:titleMedium:titleSmall:bodyLarge:bodyMedium:bodySmall:labelLarge:labelMedium:labelSmall:)"))) __attribute__((objc_designated_initializer));
- (SharedMaterial3Typography *)doCopyDisplayLarge:(SharedUi_textTextStyle *)displayLarge displayMedium:(SharedUi_textTextStyle *)displayMedium displaySmall:(SharedUi_textTextStyle *)displaySmall headlineLarge:(SharedUi_textTextStyle *)headlineLarge headlineMedium:(SharedUi_textTextStyle *)headlineMedium headlineSmall:(SharedUi_textTextStyle *)headlineSmall titleLarge:(SharedUi_textTextStyle *)titleLarge titleMedium:(SharedUi_textTextStyle *)titleMedium titleSmall:(SharedUi_textTextStyle *)titleSmall bodyLarge:(SharedUi_textTextStyle *)bodyLarge bodyMedium:(SharedUi_textTextStyle *)bodyMedium bodySmall:(SharedUi_textTextStyle *)bodySmall labelLarge:(SharedUi_textTextStyle *)labelLarge labelMedium:(SharedUi_textTextStyle *)labelMedium labelSmall:(SharedUi_textTextStyle *)labelSmall __attribute__((swift_name("doCopy(displayLarge:displayMedium:displaySmall:headlineLarge:headlineMedium:headlineSmall:titleLarge:titleMedium:titleSmall:bodyLarge:bodyMedium:bodySmall:labelLarge:labelMedium:labelSmall:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedUi_textTextStyle *bodyLarge __attribute__((swift_name("bodyLarge")));
@property (readonly) SharedUi_textTextStyle *bodyMedium __attribute__((swift_name("bodyMedium")));
@property (readonly) SharedUi_textTextStyle *bodySmall __attribute__((swift_name("bodySmall")));
@property (readonly) SharedUi_textTextStyle *displayLarge __attribute__((swift_name("displayLarge")));
@property (readonly) SharedUi_textTextStyle *displayMedium __attribute__((swift_name("displayMedium")));
@property (readonly) SharedUi_textTextStyle *displaySmall __attribute__((swift_name("displaySmall")));
@property (readonly) SharedUi_textTextStyle *headlineLarge __attribute__((swift_name("headlineLarge")));
@property (readonly) SharedUi_textTextStyle *headlineMedium __attribute__((swift_name("headlineMedium")));
@property (readonly) SharedUi_textTextStyle *headlineSmall __attribute__((swift_name("headlineSmall")));
@property (readonly) SharedUi_textTextStyle *labelLarge __attribute__((swift_name("labelLarge")));
@property (readonly) SharedUi_textTextStyle *labelMedium __attribute__((swift_name("labelMedium")));
@property (readonly) SharedUi_textTextStyle *labelSmall __attribute__((swift_name("labelSmall")));
@property (readonly) SharedUi_textTextStyle *titleLarge __attribute__((swift_name("titleLarge")));
@property (readonly) SharedUi_textTextStyle *titleMedium __attribute__((swift_name("titleMedium")));
@property (readonly) SharedUi_textTextStyle *titleSmall __attribute__((swift_name("titleSmall")));
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textTextStyle")))
@interface SharedUi_textTextStyle : SharedBase
- (instancetype)initWithColor:(uint64_t)color fontSize:(int64_t)fontSize fontWeight:(SharedUi_textFontWeight * _Nullable)fontWeight fontStyle:(id _Nullable)fontStyle fontSynthesis:(id _Nullable)fontSynthesis fontFamily:(SharedUi_textFontFamily * _Nullable)fontFamily fontFeatureSettings:(NSString * _Nullable)fontFeatureSettings letterSpacing:(int64_t)letterSpacing baselineShift:(id _Nullable)baselineShift textGeometricTransform:(SharedUi_textTextGeometricTransform * _Nullable)textGeometricTransform localeList:(SharedUi_textLocaleList * _Nullable)localeList background:(uint64_t)background textDecoration:(SharedUi_textTextDecoration * _Nullable)textDecoration shadow:(SharedUi_graphicsShadow * _Nullable)shadow textAlign:(id _Nullable)textAlign textDirection:(id _Nullable)textDirection lineHeight:(int64_t)lineHeight textIndent:(SharedUi_textTextIndent * _Nullable)textIndent platformStyle:(SharedUi_textPlatformTextStyle * _Nullable)platformStyle lineHeightStyle:(SharedUi_textLineHeightStyle * _Nullable)lineHeightStyle lineBreak:(id _Nullable)lineBreak hyphens:(id _Nullable)hyphens __attribute__((swift_name("init(color:fontSize:fontWeight:fontStyle:fontSynthesis:fontFamily:fontFeatureSettings:letterSpacing:baselineShift:textGeometricTransform:localeList:background:textDecoration:shadow:textAlign:textDirection:lineHeight:textIndent:platformStyle:lineHeightStyle:lineBreak:hyphens:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithColor:(uint64_t)color fontSize:(int64_t)fontSize fontWeight:(SharedUi_textFontWeight * _Nullable)fontWeight fontStyle:(id _Nullable)fontStyle fontSynthesis:(id _Nullable)fontSynthesis fontFamily:(SharedUi_textFontFamily * _Nullable)fontFamily fontFeatureSettings:(NSString * _Nullable)fontFeatureSettings letterSpacing:(int64_t)letterSpacing baselineShift:(id _Nullable)baselineShift textGeometricTransform:(SharedUi_textTextGeometricTransform * _Nullable)textGeometricTransform localeList:(SharedUi_textLocaleList * _Nullable)localeList background:(uint64_t)background textDecoration:(SharedUi_textTextDecoration * _Nullable)textDecoration shadow:(SharedUi_graphicsShadow * _Nullable)shadow drawStyle:(SharedUi_graphicsDrawStyle * _Nullable)drawStyle textAlign:(id _Nullable)textAlign textDirection:(id _Nullable)textDirection lineHeight:(int64_t)lineHeight textIndent:(SharedUi_textTextIndent * _Nullable)textIndent platformStyle:(SharedUi_textPlatformTextStyle * _Nullable)platformStyle lineHeightStyle:(SharedUi_textLineHeightStyle * _Nullable)lineHeightStyle lineBreak:(id _Nullable)lineBreak hyphens:(id _Nullable)hyphens textMotion:(SharedUi_textTextMotion * _Nullable)textMotion __attribute__((swift_name("init(color:fontSize:fontWeight:fontStyle:fontSynthesis:fontFamily:fontFeatureSettings:letterSpacing:baselineShift:textGeometricTransform:localeList:background:textDecoration:shadow:drawStyle:textAlign:textDirection:lineHeight:textIndent:platformStyle:lineHeightStyle:lineBreak:hyphens:textMotion:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBrush:(SharedUi_graphicsBrush * _Nullable)brush alpha:(float)alpha fontSize:(int64_t)fontSize fontWeight:(SharedUi_textFontWeight * _Nullable)fontWeight fontStyle:(id _Nullable)fontStyle fontSynthesis:(id _Nullable)fontSynthesis fontFamily:(SharedUi_textFontFamily * _Nullable)fontFamily fontFeatureSettings:(NSString * _Nullable)fontFeatureSettings letterSpacing:(int64_t)letterSpacing baselineShift:(id _Nullable)baselineShift textGeometricTransform:(SharedUi_textTextGeometricTransform * _Nullable)textGeometricTransform localeList:(SharedUi_textLocaleList * _Nullable)localeList background:(uint64_t)background textDecoration:(SharedUi_textTextDecoration * _Nullable)textDecoration shadow:(SharedUi_graphicsShadow * _Nullable)shadow drawStyle:(SharedUi_graphicsDrawStyle * _Nullable)drawStyle textAlign:(id _Nullable)textAlign textDirection:(id _Nullable)textDirection lineHeight:(int64_t)lineHeight textIndent:(SharedUi_textTextIndent * _Nullable)textIndent platformStyle:(SharedUi_textPlatformTextStyle * _Nullable)platformStyle lineHeightStyle:(SharedUi_textLineHeightStyle * _Nullable)lineHeightStyle lineBreak:(id _Nullable)lineBreak hyphens:(id _Nullable)hyphens textMotion:(SharedUi_textTextMotion * _Nullable)textMotion __attribute__((swift_name("init(brush:alpha:fontSize:fontWeight:fontStyle:fontSynthesis:fontFamily:fontFeatureSettings:letterSpacing:baselineShift:textGeometricTransform:localeList:background:textDecoration:shadow:drawStyle:textAlign:textDirection:lineHeight:textIndent:platformStyle:lineHeightStyle:lineBreak:hyphens:textMotion:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedUi_textTextStyleCompanion *companion __attribute__((swift_name("companion")));
- (SharedUi_textTextStyle *)doCopyBrush:(SharedUi_graphicsBrush * _Nullable)brush alpha:(float)alpha fontSize:(int64_t)fontSize fontWeight:(SharedUi_textFontWeight * _Nullable)fontWeight fontStyle:(id _Nullable)fontStyle fontSynthesis:(id _Nullable)fontSynthesis fontFamily:(SharedUi_textFontFamily * _Nullable)fontFamily fontFeatureSettings:(NSString * _Nullable)fontFeatureSettings letterSpacing:(int64_t)letterSpacing baselineShift:(id _Nullable)baselineShift textGeometricTransform:(SharedUi_textTextGeometricTransform * _Nullable)textGeometricTransform localeList:(SharedUi_textLocaleList * _Nullable)localeList background:(uint64_t)background textDecoration:(SharedUi_textTextDecoration * _Nullable)textDecoration shadow:(SharedUi_graphicsShadow * _Nullable)shadow drawStyle:(SharedUi_graphicsDrawStyle * _Nullable)drawStyle textAlign:(id _Nullable)textAlign textDirection:(id _Nullable)textDirection lineHeight:(int64_t)lineHeight textIndent:(SharedUi_textTextIndent * _Nullable)textIndent platformStyle:(SharedUi_textPlatformTextStyle * _Nullable)platformStyle lineHeightStyle:(SharedUi_textLineHeightStyle * _Nullable)lineHeightStyle lineBreak:(id _Nullable)lineBreak hyphens:(id _Nullable)hyphens textMotion:(SharedUi_textTextMotion * _Nullable)textMotion __attribute__((swift_name("doCopy(brush:alpha:fontSize:fontWeight:fontStyle:fontSynthesis:fontFamily:fontFeatureSettings:letterSpacing:baselineShift:textGeometricTransform:localeList:background:textDecoration:shadow:drawStyle:textAlign:textDirection:lineHeight:textIndent:platformStyle:lineHeightStyle:lineBreak:hyphens:textMotion:)")));
- (SharedUi_textTextStyle *)doCopyColor:(uint64_t)color fontSize:(int64_t)fontSize fontWeight:(SharedUi_textFontWeight * _Nullable)fontWeight fontStyle:(id _Nullable)fontStyle fontSynthesis:(id _Nullable)fontSynthesis fontFamily:(SharedUi_textFontFamily * _Nullable)fontFamily fontFeatureSettings:(NSString * _Nullable)fontFeatureSettings letterSpacing:(int64_t)letterSpacing baselineShift:(id _Nullable)baselineShift textGeometricTransform:(SharedUi_textTextGeometricTransform * _Nullable)textGeometricTransform localeList:(SharedUi_textLocaleList * _Nullable)localeList background:(uint64_t)background textDecoration:(SharedUi_textTextDecoration * _Nullable)textDecoration shadow:(SharedUi_graphicsShadow * _Nullable)shadow drawStyle:(SharedUi_graphicsDrawStyle * _Nullable)drawStyle textAlign:(id _Nullable)textAlign textDirection:(id _Nullable)textDirection lineHeight:(int64_t)lineHeight textIndent:(SharedUi_textTextIndent * _Nullable)textIndent platformStyle:(SharedUi_textPlatformTextStyle * _Nullable)platformStyle lineHeightStyle:(SharedUi_textLineHeightStyle * _Nullable)lineHeightStyle lineBreak:(id _Nullable)lineBreak hyphens:(id _Nullable)hyphens textMotion:(SharedUi_textTextMotion * _Nullable)textMotion __attribute__((swift_name("doCopy(color:fontSize:fontWeight:fontStyle:fontSynthesis:fontFamily:fontFeatureSettings:letterSpacing:baselineShift:textGeometricTransform:localeList:background:textDecoration:shadow:drawStyle:textAlign:textDirection:lineHeight:textIndent:platformStyle:lineHeightStyle:lineBreak:hyphens:textMotion:)")));
- (SharedUi_textTextStyle *)doCopyColor:(uint64_t)color fontSize:(int64_t)fontSize fontWeight:(SharedUi_textFontWeight * _Nullable)fontWeight fontStyle:(id _Nullable)fontStyle fontSynthesis:(id _Nullable)fontSynthesis fontFamily:(SharedUi_textFontFamily * _Nullable)fontFamily fontFeatureSettings:(NSString * _Nullable)fontFeatureSettings letterSpacing:(int64_t)letterSpacing baselineShift:(id _Nullable)baselineShift textGeometricTransform:(SharedUi_textTextGeometricTransform * _Nullable)textGeometricTransform localeList:(SharedUi_textLocaleList * _Nullable)localeList background:(uint64_t)background textDecoration:(SharedUi_textTextDecoration * _Nullable)textDecoration shadow:(SharedUi_graphicsShadow * _Nullable)shadow textAlign:(id _Nullable)textAlign textDirection:(id _Nullable)textDirection lineHeight:(int64_t)lineHeight textIndent:(SharedUi_textTextIndent * _Nullable)textIndent platformStyle:(SharedUi_textPlatformTextStyle * _Nullable)platformStyle lineHeightStyle:(SharedUi_textLineHeightStyle * _Nullable)lineHeightStyle lineBreak:(id _Nullable)lineBreak hyphens:(id _Nullable)hyphens __attribute__((swift_name("doCopy(color:fontSize:fontWeight:fontStyle:fontSynthesis:fontFamily:fontFeatureSettings:letterSpacing:baselineShift:textGeometricTransform:localeList:background:textDecoration:shadow:textAlign:textDirection:lineHeight:textIndent:platformStyle:lineHeightStyle:lineBreak:hyphens:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (BOOL)hasSameLayoutAffectingAttributesOther:(SharedUi_textTextStyle *)other __attribute__((swift_name("hasSameLayoutAffectingAttributes(other:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (SharedUi_textTextStyle *)mergeOther:(SharedUi_textParagraphStyle *)other __attribute__((swift_name("merge(other:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (SharedUi_textTextStyle *)mergeOther_:(SharedUi_textSpanStyle *)other __attribute__((swift_name("merge(other_:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (SharedUi_textTextStyle *)mergeOther__:(SharedUi_textTextStyle * _Nullable)other __attribute__((swift_name("merge(other__:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (SharedUi_textTextStyle *)plusOther:(SharedUi_textParagraphStyle *)other __attribute__((swift_name("plus(other:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (SharedUi_textTextStyle *)plusOther_:(SharedUi_textSpanStyle *)other __attribute__((swift_name("plus(other_:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (SharedUi_textTextStyle *)plusOther__:(SharedUi_textTextStyle *)other __attribute__((swift_name("plus(other__:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (SharedUi_textParagraphStyle *)toParagraphStyle __attribute__((swift_name("toParagraphStyle()")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (SharedUi_textSpanStyle *)toSpanStyle __attribute__((swift_name("toSpanStyle()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float alpha __attribute__((swift_name("alpha")));
@property (readonly) uint64_t background __attribute__((swift_name("background")));
@property (readonly) id _Nullable baselineShift __attribute__((swift_name("baselineShift")));
@property (readonly) SharedUi_graphicsBrush * _Nullable brush __attribute__((swift_name("brush")));
@property (readonly) uint64_t color __attribute__((swift_name("color")));
@property (readonly) SharedUi_graphicsDrawStyle * _Nullable drawStyle __attribute__((swift_name("drawStyle")));
@property (readonly) SharedUi_textFontFamily * _Nullable fontFamily __attribute__((swift_name("fontFamily")));
@property (readonly) NSString * _Nullable fontFeatureSettings __attribute__((swift_name("fontFeatureSettings")));
@property (readonly) int64_t fontSize __attribute__((swift_name("fontSize")));
@property (readonly) id _Nullable fontStyle __attribute__((swift_name("fontStyle")));
@property (readonly) id _Nullable fontSynthesis __attribute__((swift_name("fontSynthesis")));
@property (readonly) SharedUi_textFontWeight * _Nullable fontWeight __attribute__((swift_name("fontWeight")));
@property (readonly) id _Nullable hyphens __attribute__((swift_name("hyphens")));
@property (readonly) int64_t letterSpacing __attribute__((swift_name("letterSpacing")));
@property (readonly) id _Nullable lineBreak __attribute__((swift_name("lineBreak")));
@property (readonly) int64_t lineHeight __attribute__((swift_name("lineHeight")));
@property (readonly) SharedUi_textLineHeightStyle * _Nullable lineHeightStyle __attribute__((swift_name("lineHeightStyle")));
@property (readonly) SharedUi_textLocaleList * _Nullable localeList __attribute__((swift_name("localeList")));
@property (readonly) SharedUi_textPlatformTextStyle * _Nullable platformStyle __attribute__((swift_name("platformStyle")));
@property (readonly) SharedUi_graphicsShadow * _Nullable shadow __attribute__((swift_name("shadow")));
@property (readonly) id _Nullable textAlign __attribute__((swift_name("textAlign")));
@property (readonly) SharedUi_textTextDecoration * _Nullable textDecoration __attribute__((swift_name("textDecoration")));
@property (readonly) id _Nullable textDirection __attribute__((swift_name("textDirection")));
@property (readonly) SharedUi_textTextGeometricTransform * _Nullable textGeometricTransform __attribute__((swift_name("textGeometricTransform")));
@property (readonly) SharedUi_textTextIndent * _Nullable textIndent __attribute__((swift_name("textIndent")));
@property (readonly) SharedUi_textTextMotion * _Nullable textMotion __attribute__((swift_name("textMotion")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol SharedKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textFontWeight")))
@interface SharedUi_textFontWeight : SharedBase <SharedKotlinComparable>
- (instancetype)initWithWeight:(int32_t)weight __attribute__((swift_name("init(weight:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedUi_textFontWeightCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(SharedUi_textFontWeight *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t weight __attribute__((swift_name("weight")));
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((swift_name("Ui_textFontFamily")))
@interface SharedUi_textFontFamily : SharedBase
@property (class, readonly, getter=companion) SharedUi_textFontFamilyCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL canLoadSynchronously __attribute__((swift_name("canLoadSynchronously")));
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textTextGeometricTransform")))
@interface SharedUi_textTextGeometricTransform : SharedBase
- (instancetype)initWithScaleX:(float)scaleX skewX:(float)skewX __attribute__((swift_name("init(scaleX:skewX:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedUi_textTextGeometricTransformCompanion *companion __attribute__((swift_name("companion")));
- (SharedUi_textTextGeometricTransform *)doCopyScaleX:(float)scaleX skewX:(float)skewX __attribute__((swift_name("doCopy(scaleX:skewX:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float scaleX __attribute__((swift_name("scaleX")));
@property (readonly) float skewX __attribute__((swift_name("skewX")));
@end

__attribute__((swift_name("KotlinIterable")))
@protocol SharedKotlinIterable
@required
- (id<SharedKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end

__attribute__((swift_name("KotlinCollection")))
@protocol SharedKotlinCollection <SharedKotlinIterable>
@required
- (BOOL)containsElement:(id _Nullable)element __attribute__((swift_name("contains(element:)")));
- (BOOL)containsAllElements:(id)elements __attribute__((swift_name("containsAll(elements:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textLocaleList")))
@interface SharedUi_textLocaleList : SharedBase <SharedKotlinCollection>
- (instancetype)initWithLanguageTags:(NSString *)languageTags __attribute__((swift_name("init(languageTags:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithLocales:(SharedKotlinArray<SharedUi_textLocale *> *)locales __attribute__((swift_name("init(locales:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithLocaleList:(NSArray<SharedUi_textLocale *> *)localeList __attribute__((swift_name("init(localeList:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedUi_textLocaleListCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)containsElement:(SharedUi_textLocale *)element __attribute__((swift_name("contains(element:)")));
- (BOOL)containsAllElements:(id)elements __attribute__((swift_name("containsAll(elements:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (SharedUi_textLocale *)getI:(int32_t)i __attribute__((swift_name("get(i:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (id<SharedKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedUi_textLocale *> *localeList __attribute__((swift_name("localeList")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textTextDecoration")))
@interface SharedUi_textTextDecoration : SharedBase
@property (class, readonly, getter=companion) SharedUi_textTextDecorationCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)containsOther:(SharedUi_textTextDecoration *)other __attribute__((swift_name("contains(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedUi_textTextDecoration *)plusDecoration:(SharedUi_textTextDecoration *)decoration __attribute__((swift_name("plus(decoration:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t mask __attribute__((swift_name("mask")));
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_graphicsShadow")))
@interface SharedUi_graphicsShadow : SharedBase
- (instancetype)initWithColor:(uint64_t)color offset:(int64_t)offset blurRadius:(float)blurRadius __attribute__((swift_name("init(color:offset:blurRadius:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedUi_graphicsShadowCompanion *companion __attribute__((swift_name("companion")));
- (SharedUi_graphicsShadow *)doCopyColor:(uint64_t)color offset:(int64_t)offset blurRadius:(float)blurRadius __attribute__((swift_name("doCopy(color:offset:blurRadius:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) float blurRadius __attribute__((swift_name("blurRadius")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) uint64_t color __attribute__((swift_name("color")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) int64_t offset __attribute__((swift_name("offset")));
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textTextIndent")))
@interface SharedUi_textTextIndent : SharedBase
- (instancetype)initWithFirstLine:(int64_t)firstLine restLine:(int64_t)restLine __attribute__((swift_name("init(firstLine:restLine:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedUi_textTextIndentCompanion *companion __attribute__((swift_name("companion")));
- (SharedUi_textTextIndent *)doCopyFirstLine:(int64_t)firstLine restLine:(int64_t)restLine __attribute__((swift_name("doCopy(firstLine:restLine:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t firstLine __attribute__((swift_name("firstLine")));
@property (readonly) int64_t restLine __attribute__((swift_name("restLine")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textPlatformTextStyle")))
@interface SharedUi_textPlatformTextStyle : SharedBase
- (instancetype)initWithSpanStyle:(SharedUi_textPlatformSpanStyle * _Nullable)spanStyle paragraphStyle:(SharedUi_textPlatformParagraphStyle * _Nullable)paragraphStyle __attribute__((swift_name("init(spanStyle:paragraphStyle:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
@property (readonly) SharedUi_textPlatformParagraphStyle * _Nullable paragraphStyle __attribute__((swift_name("paragraphStyle")));
@property (readonly) SharedUi_textPlatformSpanStyle * _Nullable spanStyle __attribute__((swift_name("spanStyle")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textLineHeightStyle")))
@interface SharedUi_textLineHeightStyle : SharedBase
- (instancetype)initWithAlignment:(float)alignment trim:(int32_t)trim __attribute__((swift_name("init(alignment:trim:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedUi_textLineHeightStyleCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float alignment __attribute__((swift_name("alignment")));
@property (readonly) int32_t trim __attribute__((swift_name("trim")));
@end

__attribute__((swift_name("Ui_graphicsDrawStyle")))
@interface SharedUi_graphicsDrawStyle : SharedBase
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textTextMotion")))
@interface SharedUi_textTextMotion : SharedBase
@property (class, readonly, getter=companion) SharedUi_textTextMotionCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((swift_name("Ui_graphicsBrush")))
@interface SharedUi_graphicsBrush : SharedBase
@property (class, readonly, getter=companion) SharedUi_graphicsBrushCompanion *companion __attribute__((swift_name("companion")));
- (void)applyToSize:(int64_t)size p:(id<SharedUi_graphicsPaint>)p alpha:(float)alpha __attribute__((swift_name("applyTo(size:p:alpha:)")));
@property (readonly) int64_t intrinsicSize __attribute__((swift_name("intrinsicSize")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textTextStyle.Companion")))
@interface SharedUi_textTextStyleCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedUi_textTextStyleCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) SharedUi_textTextStyle *Default __attribute__((swift_name("Default")));
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textParagraphStyle")))
@interface SharedUi_textParagraphStyle : SharedBase
- (instancetype)initWithTextAlign:(id _Nullable)textAlign textDirection:(id _Nullable)textDirection lineHeight:(int64_t)lineHeight textIndent:(SharedUi_textTextIndent * _Nullable)textIndent platformStyle:(SharedUi_textPlatformParagraphStyle * _Nullable)platformStyle lineHeightStyle:(SharedUi_textLineHeightStyle * _Nullable)lineHeightStyle lineBreak:(id _Nullable)lineBreak hyphens:(id _Nullable)hyphens __attribute__((swift_name("init(textAlign:textDirection:lineHeight:textIndent:platformStyle:lineHeightStyle:lineBreak:hyphens:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithTextAlign:(id _Nullable)textAlign textDirection:(id _Nullable)textDirection lineHeight:(int64_t)lineHeight textIndent:(SharedUi_textTextIndent * _Nullable)textIndent platformStyle:(SharedUi_textPlatformParagraphStyle * _Nullable)platformStyle lineHeightStyle:(SharedUi_textLineHeightStyle * _Nullable)lineHeightStyle lineBreak:(id _Nullable)lineBreak hyphens:(id _Nullable)hyphens textMotion:(SharedUi_textTextMotion * _Nullable)textMotion __attribute__((swift_name("init(textAlign:textDirection:lineHeight:textIndent:platformStyle:lineHeightStyle:lineBreak:hyphens:textMotion:)"))) __attribute__((objc_designated_initializer));
- (SharedUi_textParagraphStyle *)doCopyTextAlign:(id _Nullable)textAlign textDirection:(id _Nullable)textDirection lineHeight:(int64_t)lineHeight textIndent:(SharedUi_textTextIndent * _Nullable)textIndent platformStyle:(SharedUi_textPlatformParagraphStyle * _Nullable)platformStyle lineHeightStyle:(SharedUi_textLineHeightStyle * _Nullable)lineHeightStyle lineBreak:(id _Nullable)lineBreak hyphens:(id _Nullable)hyphens __attribute__((swift_name("doCopy(textAlign:textDirection:lineHeight:textIndent:platformStyle:lineHeightStyle:lineBreak:hyphens:)")));
- (SharedUi_textParagraphStyle *)doCopyTextAlign:(id _Nullable)textAlign textDirection:(id _Nullable)textDirection lineHeight:(int64_t)lineHeight textIndent:(SharedUi_textTextIndent * _Nullable)textIndent platformStyle:(SharedUi_textPlatformParagraphStyle * _Nullable)platformStyle lineHeightStyle:(SharedUi_textLineHeightStyle * _Nullable)lineHeightStyle lineBreak:(id _Nullable)lineBreak hyphens:(id _Nullable)hyphens textMotion:(SharedUi_textTextMotion * _Nullable)textMotion __attribute__((swift_name("doCopy(textAlign:textDirection:lineHeight:textIndent:platformStyle:lineHeightStyle:lineBreak:hyphens:textMotion:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (SharedUi_textParagraphStyle *)mergeOther:(SharedUi_textParagraphStyle * _Nullable)other __attribute__((swift_name("merge(other:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (SharedUi_textParagraphStyle *)plusOther:(SharedUi_textParagraphStyle *)other __attribute__((swift_name("plus(other:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id _Nullable hyphens __attribute__((swift_name("hyphens")));
@property (readonly) id _Nullable lineBreak __attribute__((swift_name("lineBreak")));
@property (readonly) int64_t lineHeight __attribute__((swift_name("lineHeight")));
@property (readonly) SharedUi_textLineHeightStyle * _Nullable lineHeightStyle __attribute__((swift_name("lineHeightStyle")));
@property (readonly) SharedUi_textPlatformParagraphStyle * _Nullable platformStyle __attribute__((swift_name("platformStyle")));
@property (readonly) id _Nullable textAlign __attribute__((swift_name("textAlign")));
@property (readonly) id _Nullable textDirection __attribute__((swift_name("textDirection")));
@property (readonly) SharedUi_textTextIndent * _Nullable textIndent __attribute__((swift_name("textIndent")));
@property (readonly) SharedUi_textTextMotion * _Nullable textMotion __attribute__((swift_name("textMotion")));
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textSpanStyle")))
@interface SharedUi_textSpanStyle : SharedBase
- (instancetype)initWithColor:(uint64_t)color fontSize:(int64_t)fontSize fontWeight:(SharedUi_textFontWeight * _Nullable)fontWeight fontStyle:(id _Nullable)fontStyle fontSynthesis:(id _Nullable)fontSynthesis fontFamily:(SharedUi_textFontFamily * _Nullable)fontFamily fontFeatureSettings:(NSString * _Nullable)fontFeatureSettings letterSpacing:(int64_t)letterSpacing baselineShift:(id _Nullable)baselineShift textGeometricTransform:(SharedUi_textTextGeometricTransform * _Nullable)textGeometricTransform localeList:(SharedUi_textLocaleList * _Nullable)localeList background:(uint64_t)background textDecoration:(SharedUi_textTextDecoration * _Nullable)textDecoration shadow:(SharedUi_graphicsShadow * _Nullable)shadow __attribute__((swift_name("init(color:fontSize:fontWeight:fontStyle:fontSynthesis:fontFamily:fontFeatureSettings:letterSpacing:baselineShift:textGeometricTransform:localeList:background:textDecoration:shadow:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithColor:(uint64_t)color fontSize:(int64_t)fontSize fontWeight:(SharedUi_textFontWeight * _Nullable)fontWeight fontStyle:(id _Nullable)fontStyle fontSynthesis:(id _Nullable)fontSynthesis fontFamily:(SharedUi_textFontFamily * _Nullable)fontFamily fontFeatureSettings:(NSString * _Nullable)fontFeatureSettings letterSpacing:(int64_t)letterSpacing baselineShift:(id _Nullable)baselineShift textGeometricTransform:(SharedUi_textTextGeometricTransform * _Nullable)textGeometricTransform localeList:(SharedUi_textLocaleList * _Nullable)localeList background:(uint64_t)background textDecoration:(SharedUi_textTextDecoration * _Nullable)textDecoration shadow:(SharedUi_graphicsShadow * _Nullable)shadow platformStyle:(SharedUi_textPlatformSpanStyle * _Nullable)platformStyle __attribute__((swift_name("init(color:fontSize:fontWeight:fontStyle:fontSynthesis:fontFamily:fontFeatureSettings:letterSpacing:baselineShift:textGeometricTransform:localeList:background:textDecoration:shadow:platformStyle:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithColor:(uint64_t)color fontSize:(int64_t)fontSize fontWeight:(SharedUi_textFontWeight * _Nullable)fontWeight fontStyle:(id _Nullable)fontStyle fontSynthesis:(id _Nullable)fontSynthesis fontFamily:(SharedUi_textFontFamily * _Nullable)fontFamily fontFeatureSettings:(NSString * _Nullable)fontFeatureSettings letterSpacing:(int64_t)letterSpacing baselineShift:(id _Nullable)baselineShift textGeometricTransform:(SharedUi_textTextGeometricTransform * _Nullable)textGeometricTransform localeList:(SharedUi_textLocaleList * _Nullable)localeList background:(uint64_t)background textDecoration:(SharedUi_textTextDecoration * _Nullable)textDecoration shadow:(SharedUi_graphicsShadow * _Nullable)shadow platformStyle:(SharedUi_textPlatformSpanStyle * _Nullable)platformStyle drawStyle:(SharedUi_graphicsDrawStyle * _Nullable)drawStyle __attribute__((swift_name("init(color:fontSize:fontWeight:fontStyle:fontSynthesis:fontFamily:fontFeatureSettings:letterSpacing:baselineShift:textGeometricTransform:localeList:background:textDecoration:shadow:platformStyle:drawStyle:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBrush:(SharedUi_graphicsBrush * _Nullable)brush alpha:(float)alpha fontSize:(int64_t)fontSize fontWeight:(SharedUi_textFontWeight * _Nullable)fontWeight fontStyle:(id _Nullable)fontStyle fontSynthesis:(id _Nullable)fontSynthesis fontFamily:(SharedUi_textFontFamily * _Nullable)fontFamily fontFeatureSettings:(NSString * _Nullable)fontFeatureSettings letterSpacing:(int64_t)letterSpacing baselineShift:(id _Nullable)baselineShift textGeometricTransform:(SharedUi_textTextGeometricTransform * _Nullable)textGeometricTransform localeList:(SharedUi_textLocaleList * _Nullable)localeList background:(uint64_t)background textDecoration:(SharedUi_textTextDecoration * _Nullable)textDecoration shadow:(SharedUi_graphicsShadow * _Nullable)shadow platformStyle:(SharedUi_textPlatformSpanStyle * _Nullable)platformStyle drawStyle:(SharedUi_graphicsDrawStyle * _Nullable)drawStyle __attribute__((swift_name("init(brush:alpha:fontSize:fontWeight:fontStyle:fontSynthesis:fontFamily:fontFeatureSettings:letterSpacing:baselineShift:textGeometricTransform:localeList:background:textDecoration:shadow:platformStyle:drawStyle:)"))) __attribute__((objc_designated_initializer));
- (SharedUi_textSpanStyle *)doCopyBrush:(SharedUi_graphicsBrush * _Nullable)brush alpha:(float)alpha fontSize:(int64_t)fontSize fontWeight:(SharedUi_textFontWeight * _Nullable)fontWeight fontStyle:(id _Nullable)fontStyle fontSynthesis:(id _Nullable)fontSynthesis fontFamily:(SharedUi_textFontFamily * _Nullable)fontFamily fontFeatureSettings:(NSString * _Nullable)fontFeatureSettings letterSpacing:(int64_t)letterSpacing baselineShift:(id _Nullable)baselineShift textGeometricTransform:(SharedUi_textTextGeometricTransform * _Nullable)textGeometricTransform localeList:(SharedUi_textLocaleList * _Nullable)localeList background:(uint64_t)background textDecoration:(SharedUi_textTextDecoration * _Nullable)textDecoration shadow:(SharedUi_graphicsShadow * _Nullable)shadow platformStyle:(SharedUi_textPlatformSpanStyle * _Nullable)platformStyle drawStyle:(SharedUi_graphicsDrawStyle * _Nullable)drawStyle __attribute__((swift_name("doCopy(brush:alpha:fontSize:fontWeight:fontStyle:fontSynthesis:fontFamily:fontFeatureSettings:letterSpacing:baselineShift:textGeometricTransform:localeList:background:textDecoration:shadow:platformStyle:drawStyle:)")));
- (SharedUi_textSpanStyle *)doCopyColor:(uint64_t)color fontSize:(int64_t)fontSize fontWeight:(SharedUi_textFontWeight * _Nullable)fontWeight fontStyle:(id _Nullable)fontStyle fontSynthesis:(id _Nullable)fontSynthesis fontFamily:(SharedUi_textFontFamily * _Nullable)fontFamily fontFeatureSettings:(NSString * _Nullable)fontFeatureSettings letterSpacing:(int64_t)letterSpacing baselineShift:(id _Nullable)baselineShift textGeometricTransform:(SharedUi_textTextGeometricTransform * _Nullable)textGeometricTransform localeList:(SharedUi_textLocaleList * _Nullable)localeList background:(uint64_t)background textDecoration:(SharedUi_textTextDecoration * _Nullable)textDecoration shadow:(SharedUi_graphicsShadow * _Nullable)shadow __attribute__((swift_name("doCopy(color:fontSize:fontWeight:fontStyle:fontSynthesis:fontFamily:fontFeatureSettings:letterSpacing:baselineShift:textGeometricTransform:localeList:background:textDecoration:shadow:)")));
- (SharedUi_textSpanStyle *)doCopyColor:(uint64_t)color fontSize:(int64_t)fontSize fontWeight:(SharedUi_textFontWeight * _Nullable)fontWeight fontStyle:(id _Nullable)fontStyle fontSynthesis:(id _Nullable)fontSynthesis fontFamily:(SharedUi_textFontFamily * _Nullable)fontFamily fontFeatureSettings:(NSString * _Nullable)fontFeatureSettings letterSpacing:(int64_t)letterSpacing baselineShift:(id _Nullable)baselineShift textGeometricTransform:(SharedUi_textTextGeometricTransform * _Nullable)textGeometricTransform localeList:(SharedUi_textLocaleList * _Nullable)localeList background:(uint64_t)background textDecoration:(SharedUi_textTextDecoration * _Nullable)textDecoration shadow:(SharedUi_graphicsShadow * _Nullable)shadow platformStyle:(SharedUi_textPlatformSpanStyle * _Nullable)platformStyle __attribute__((swift_name("doCopy(color:fontSize:fontWeight:fontStyle:fontSynthesis:fontFamily:fontFeatureSettings:letterSpacing:baselineShift:textGeometricTransform:localeList:background:textDecoration:shadow:platformStyle:)")));
- (SharedUi_textSpanStyle *)doCopyColor:(uint64_t)color fontSize:(int64_t)fontSize fontWeight:(SharedUi_textFontWeight * _Nullable)fontWeight fontStyle:(id _Nullable)fontStyle fontSynthesis:(id _Nullable)fontSynthesis fontFamily:(SharedUi_textFontFamily * _Nullable)fontFamily fontFeatureSettings:(NSString * _Nullable)fontFeatureSettings letterSpacing:(int64_t)letterSpacing baselineShift:(id _Nullable)baselineShift textGeometricTransform:(SharedUi_textTextGeometricTransform * _Nullable)textGeometricTransform localeList:(SharedUi_textLocaleList * _Nullable)localeList background:(uint64_t)background textDecoration:(SharedUi_textTextDecoration * _Nullable)textDecoration shadow:(SharedUi_graphicsShadow * _Nullable)shadow platformStyle:(SharedUi_textPlatformSpanStyle * _Nullable)platformStyle drawStyle:(SharedUi_graphicsDrawStyle * _Nullable)drawStyle __attribute__((swift_name("doCopy(color:fontSize:fontWeight:fontStyle:fontSynthesis:fontFamily:fontFeatureSettings:letterSpacing:baselineShift:textGeometricTransform:localeList:background:textDecoration:shadow:platformStyle:drawStyle:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (SharedUi_textSpanStyle *)mergeOther:(SharedUi_textSpanStyle * _Nullable)other __attribute__((swift_name("merge(other:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (SharedUi_textSpanStyle *)plusOther:(SharedUi_textSpanStyle *)other __attribute__((swift_name("plus(other:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float alpha __attribute__((swift_name("alpha")));
@property (readonly) uint64_t background __attribute__((swift_name("background")));
@property (readonly) id _Nullable baselineShift __attribute__((swift_name("baselineShift")));
@property (readonly) SharedUi_graphicsBrush * _Nullable brush __attribute__((swift_name("brush")));
@property (readonly) uint64_t color __attribute__((swift_name("color")));
@property (readonly) SharedUi_graphicsDrawStyle * _Nullable drawStyle __attribute__((swift_name("drawStyle")));
@property (readonly) SharedUi_textFontFamily * _Nullable fontFamily __attribute__((swift_name("fontFamily")));
@property (readonly) NSString * _Nullable fontFeatureSettings __attribute__((swift_name("fontFeatureSettings")));
@property (readonly) int64_t fontSize __attribute__((swift_name("fontSize")));
@property (readonly) id _Nullable fontStyle __attribute__((swift_name("fontStyle")));
@property (readonly) id _Nullable fontSynthesis __attribute__((swift_name("fontSynthesis")));
@property (readonly) SharedUi_textFontWeight * _Nullable fontWeight __attribute__((swift_name("fontWeight")));
@property (readonly) int64_t letterSpacing __attribute__((swift_name("letterSpacing")));
@property (readonly) SharedUi_textLocaleList * _Nullable localeList __attribute__((swift_name("localeList")));
@property (readonly) SharedUi_textPlatformSpanStyle * _Nullable platformStyle __attribute__((swift_name("platformStyle")));
@property (readonly) SharedUi_graphicsShadow * _Nullable shadow __attribute__((swift_name("shadow")));
@property (readonly) SharedUi_textTextDecoration * _Nullable textDecoration __attribute__((swift_name("textDecoration")));
@property (readonly) SharedUi_textTextGeometricTransform * _Nullable textGeometricTransform __attribute__((swift_name("textGeometricTransform")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textFontWeight.Companion")))
@interface SharedUi_textFontWeightCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedUi_textFontWeightCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) SharedUi_textFontWeight *Black __attribute__((swift_name("Black")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) SharedUi_textFontWeight *Bold __attribute__((swift_name("Bold")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) SharedUi_textFontWeight *ExtraBold __attribute__((swift_name("ExtraBold")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) SharedUi_textFontWeight *ExtraLight __attribute__((swift_name("ExtraLight")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) SharedUi_textFontWeight *Light __attribute__((swift_name("Light")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) SharedUi_textFontWeight *Medium __attribute__((swift_name("Medium")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) SharedUi_textFontWeight *Normal __attribute__((swift_name("Normal")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) SharedUi_textFontWeight *SemiBold __attribute__((swift_name("SemiBold")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) SharedUi_textFontWeight *Thin __attribute__((swift_name("Thin")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) SharedUi_textFontWeight *W100 __attribute__((swift_name("W100")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) SharedUi_textFontWeight *W200 __attribute__((swift_name("W200")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) SharedUi_textFontWeight *W300 __attribute__((swift_name("W300")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) SharedUi_textFontWeight *W400 __attribute__((swift_name("W400")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) SharedUi_textFontWeight *W500 __attribute__((swift_name("W500")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) SharedUi_textFontWeight *W600 __attribute__((swift_name("W600")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) SharedUi_textFontWeight *W700 __attribute__((swift_name("W700")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) SharedUi_textFontWeight *W800 __attribute__((swift_name("W800")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) SharedUi_textFontWeight *W900 __attribute__((swift_name("W900")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textFontFamily.Companion")))
@interface SharedUi_textFontFamilyCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedUi_textFontFamilyCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedUi_textGenericFontFamily *Cursive __attribute__((swift_name("Cursive")));
@property (readonly) SharedUi_textSystemFontFamily *Default __attribute__((swift_name("Default")));
@property (readonly) SharedUi_textGenericFontFamily *Monospace __attribute__((swift_name("Monospace")));
@property (readonly) SharedUi_textGenericFontFamily *SansSerif __attribute__((swift_name("SansSerif")));
@property (readonly) SharedUi_textGenericFontFamily *Serif __attribute__((swift_name("Serif")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textTextGeometricTransform.Companion")))
@interface SharedUi_textTextGeometricTransformCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedUi_textTextGeometricTransformCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol SharedKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textLocale")))
@interface SharedUi_textLocale : SharedBase
- (instancetype)initWithLanguageTag:(NSString *)languageTag __attribute__((swift_name("init(languageTag:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedUi_textLocaleCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toLanguageTag __attribute__((swift_name("toLanguageTag()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *language __attribute__((swift_name("language")));
@property (readonly) NSString *region __attribute__((swift_name("region")));
@property (readonly) NSString *script __attribute__((swift_name("script")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface SharedKotlinArray<T> : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<SharedKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textLocaleList.Companion")))
@interface SharedUi_textLocaleListCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedUi_textLocaleListCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedUi_textLocaleList *current __attribute__((swift_name("current")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textTextDecoration.Companion")))
@interface SharedUi_textTextDecorationCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedUi_textTextDecorationCompanion *shared __attribute__((swift_name("shared")));
- (SharedUi_textTextDecoration *)combineDecorations:(NSArray<SharedUi_textTextDecoration *> *)decorations __attribute__((swift_name("combine(decorations:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) SharedUi_textTextDecoration *LineThrough __attribute__((swift_name("LineThrough")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) SharedUi_textTextDecoration *None __attribute__((swift_name("None")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) SharedUi_textTextDecoration *Underline __attribute__((swift_name("Underline")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_graphicsShadow.Companion")))
@interface SharedUi_graphicsShadowCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedUi_graphicsShadowCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) SharedUi_graphicsShadow *None __attribute__((swift_name("None")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textTextIndent.Companion")))
@interface SharedUi_textTextIndentCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedUi_textTextIndentCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) SharedUi_textTextIndent *None __attribute__((swift_name("None")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textPlatformSpanStyle")))
@interface SharedUi_textPlatformSpanStyle : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedUi_textPlatformSpanStyleCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedUi_textPlatformSpanStyle *)mergeOther:(SharedUi_textPlatformSpanStyle * _Nullable)other __attribute__((swift_name("merge(other:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textPlatformParagraphStyle")))
@interface SharedUi_textPlatformParagraphStyle : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedUi_textPlatformParagraphStyleCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedUi_textPlatformParagraphStyle *)mergeOther:(SharedUi_textPlatformParagraphStyle * _Nullable)other __attribute__((swift_name("merge(other:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textLineHeightStyle.Companion")))
@interface SharedUi_textLineHeightStyleCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedUi_textLineHeightStyleCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedUi_textLineHeightStyle *Default __attribute__((swift_name("Default")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textTextMotion.Companion")))
@interface SharedUi_textTextMotionCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedUi_textTextMotionCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedUi_textTextMotion *Animated __attribute__((swift_name("Animated")));
@property (readonly) SharedUi_textTextMotion *Static __attribute__((swift_name("Static")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_graphicsBrush.Companion")))
@interface SharedUi_graphicsBrushCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedUi_graphicsBrushCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (SharedUi_graphicsBrush *)horizontalGradientColorStops:(SharedKotlinArray<SharedKotlinPair<SharedFloat *, id> *> *)colorStops startX:(float)startX endX:(float)endX tileMode:(int32_t)tileMode __attribute__((swift_name("horizontalGradient(colorStops:startX:endX:tileMode:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (SharedUi_graphicsBrush *)horizontalGradientColors:(NSArray<id> *)colors startX:(float)startX endX:(float)endX tileMode:(int32_t)tileMode __attribute__((swift_name("horizontalGradient(colors:startX:endX:tileMode:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (SharedUi_graphicsBrush *)linearGradientColorStops:(SharedKotlinArray<SharedKotlinPair<SharedFloat *, id> *> *)colorStops start:(int64_t)start end:(int64_t)end tileMode:(int32_t)tileMode __attribute__((swift_name("linearGradient(colorStops:start:end:tileMode:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (SharedUi_graphicsBrush *)linearGradientColors:(NSArray<id> *)colors start:(int64_t)start end:(int64_t)end tileMode:(int32_t)tileMode __attribute__((swift_name("linearGradient(colors:start:end:tileMode:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (SharedUi_graphicsBrush *)radialGradientColorStops:(SharedKotlinArray<SharedKotlinPair<SharedFloat *, id> *> *)colorStops center:(int64_t)center radius:(float)radius tileMode:(int32_t)tileMode __attribute__((swift_name("radialGradient(colorStops:center:radius:tileMode:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (SharedUi_graphicsBrush *)radialGradientColors:(NSArray<id> *)colors center:(int64_t)center radius:(float)radius tileMode:(int32_t)tileMode __attribute__((swift_name("radialGradient(colors:center:radius:tileMode:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (SharedUi_graphicsBrush *)sweepGradientColorStops:(SharedKotlinArray<SharedKotlinPair<SharedFloat *, id> *> *)colorStops center:(int64_t)center __attribute__((swift_name("sweepGradient(colorStops:center:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (SharedUi_graphicsBrush *)sweepGradientColors:(NSArray<id> *)colors center:(int64_t)center __attribute__((swift_name("sweepGradient(colors:center:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (SharedUi_graphicsBrush *)verticalGradientColorStops:(SharedKotlinArray<SharedKotlinPair<SharedFloat *, id> *> *)colorStops startY:(float)startY endY:(float)endY tileMode:(int32_t)tileMode __attribute__((swift_name("verticalGradient(colorStops:startY:endY:tileMode:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (SharedUi_graphicsBrush *)verticalGradientColors:(NSArray<id> *)colors startY:(float)startY endY:(float)endY tileMode:(int32_t)tileMode __attribute__((swift_name("verticalGradient(colors:startY:endY:tileMode:)")));
@end

__attribute__((swift_name("Ui_graphicsPaint")))
@protocol SharedUi_graphicsPaint
@required
- (SharedSkikoPaint *)asFrameworkPaint __attribute__((swift_name("asFrameworkPaint()")));
@property float alpha __attribute__((swift_name("alpha")));
@property int32_t blendMode __attribute__((swift_name("blendMode")));
@property uint64_t color __attribute__((swift_name("color")));
@property SharedUi_graphicsColorFilter * _Nullable colorFilter __attribute__((swift_name("colorFilter")));
@property int32_t filterQuality __attribute__((swift_name("filterQuality")));
@property BOOL isAntiAlias __attribute__((swift_name("isAntiAlias")));
@property id<SharedUi_graphicsPathEffect> _Nullable pathEffect __attribute__((swift_name("pathEffect")));
@property SharedSkikoShader * _Nullable shader __attribute__((swift_name("shader")));
@property int32_t strokeCap __attribute__((swift_name("strokeCap")));
@property int32_t strokeJoin __attribute__((swift_name("strokeJoin")));
@property float strokeMiterLimit __attribute__((swift_name("strokeMiterLimit")));
@property float strokeWidth __attribute__((swift_name("strokeWidth")));
@property int32_t style __attribute__((swift_name("style")));
@end

__attribute__((swift_name("Ui_textSystemFontFamily")))
@interface SharedUi_textSystemFontFamily : SharedUi_textFontFamily
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textGenericFontFamily")))
@interface SharedUi_textGenericFontFamily : SharedUi_textSystemFontFamily
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textLocale.Companion")))
@interface SharedUi_textLocaleCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedUi_textLocaleCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedUi_textLocale *current __attribute__((swift_name("current")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textPlatformSpanStyle.Companion")))
@interface SharedUi_textPlatformSpanStyleCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedUi_textPlatformSpanStyleCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedUi_textPlatformSpanStyle *Default __attribute__((swift_name("Default")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textPlatformParagraphStyle.Companion")))
@interface SharedUi_textPlatformParagraphStyleCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedUi_textPlatformParagraphStyleCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedUi_textPlatformParagraphStyle *Default __attribute__((swift_name("Default")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinPair")))
@interface SharedKotlinPair<__covariant A, __covariant B> : SharedBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("init(first:second:)"))) __attribute__((objc_designated_initializer));
- (SharedKotlinPair<A, B> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("doCopy(first:second:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@end

__attribute__((swift_name("SkikoNative")))
@interface SharedSkikoNative : SharedBase
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedSkikoNativeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("SkikoManaged")))
@interface SharedSkikoManaged : SharedSkikoNative
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)close __attribute__((swift_name("close()")));
@property (readonly) BOOL isClosed __attribute__((swift_name("isClosed")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPaint")))
@interface SharedSkikoPaint : SharedSkikoManaged
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedSkikoPaintCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)hasNothingToDraw __attribute__((swift_name("hasNothingToDraw()")));
- (SharedSkikoPaint *)makeClone __attribute__((swift_name("makeClone()")));
- (SharedSkikoPaint *)reset __attribute__((swift_name("reset()")));
- (SharedSkikoPaint *)setARGBA:(int32_t)a r:(int32_t)r g:(int32_t)g b:(int32_t)b __attribute__((swift_name("setARGB(a:r:g:b:)")));
- (SharedSkikoPaint *)setAlphafA:(float)a __attribute__((swift_name("setAlphaf(a:)")));
- (SharedSkikoPaint *)setColor4fColor:(SharedSkikoColor4f *)color colorSpace:(SharedSkikoColorSpace * _Nullable)colorSpace __attribute__((swift_name("setColor4f(color:colorSpace:)")));
- (SharedSkikoPaint *)setStrokeValue:(BOOL)value __attribute__((swift_name("setStroke(value:)")));
@property int32_t alpha __attribute__((swift_name("alpha")));
@property (readonly) float alphaf __attribute__((swift_name("alphaf")));
@property SharedSkikoBlendMode *blendMode __attribute__((swift_name("blendMode")));
@property int32_t color __attribute__((swift_name("color")));
@property SharedSkikoColor4f *color4f __attribute__((swift_name("color4f")));
@property SharedSkikoColorFilter * _Nullable colorFilter __attribute__((swift_name("colorFilter")));
@property SharedSkikoImageFilter * _Nullable imageFilter __attribute__((swift_name("imageFilter")));
@property BOOL isAntiAlias __attribute__((swift_name("isAntiAlias")));
@property BOOL isDither __attribute__((swift_name("isDither")));
@property (readonly) BOOL isSrcOver __attribute__((swift_name("isSrcOver")));
@property SharedSkikoMaskFilter * _Nullable maskFilter __attribute__((swift_name("maskFilter")));
@property SharedSkikoPaintMode *mode __attribute__((swift_name("mode")));
@property SharedSkikoPathEffect * _Nullable pathEffect __attribute__((swift_name("pathEffect")));
@property SharedSkikoShader * _Nullable shader __attribute__((swift_name("shader")));
@property SharedSkikoPaintStrokeCap *strokeCap __attribute__((swift_name("strokeCap")));
@property SharedSkikoPaintStrokeJoin *strokeJoin __attribute__((swift_name("strokeJoin")));
@property float strokeMiter __attribute__((swift_name("strokeMiter")));
@property float strokeWidth __attribute__((swift_name("strokeWidth")));
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_graphicsColorFilter")))
@interface SharedUi_graphicsColorFilter : SharedBase
@property (class, readonly, getter=companion) SharedUi_graphicsColorFilterCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((swift_name("Ui_graphicsPathEffect")))
@protocol SharedUi_graphicsPathEffect
@required
@end

__attribute__((swift_name("SkikoRefCnt")))
@interface SharedSkikoRefCnt : SharedSkikoManaged

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr allowClose:(BOOL)allowClose __attribute__((swift_name("init(ptr:allowClose:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t refCount __attribute__((swift_name("refCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoShader")))
@interface SharedSkikoShader : SharedSkikoRefCnt

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr allowClose:(BOOL)allowClose __attribute__((swift_name("init(ptr:allowClose:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedSkikoShaderCompanion *companion __attribute__((swift_name("companion")));
- (SharedSkikoShader *)makeWithColorFilterF:(SharedSkikoColorFilter * _Nullable)f __attribute__((swift_name("makeWithColorFilter(f:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoNative.Companion")))
@interface SharedSkikoNativeCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSkikoNativeCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) void * _Nullable NullPointer __attribute__((swift_name("NullPointer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPaint.Companion")))
@interface SharedSkikoPaintCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSkikoPaintCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoColor4f")))
@interface SharedSkikoColor4f : SharedBase
- (instancetype)initWithRgba:(SharedKotlinFloatArray *)rgba __attribute__((swift_name("init(rgba:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithC:(int32_t)c __attribute__((swift_name("init(c:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithR:(float)r g:(float)g b:(float)b a:(float)a __attribute__((swift_name("init(r:g:b:a:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedSkikoColor4fCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (SharedKotlinFloatArray *)flatten __attribute__((swift_name("flatten()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedSkikoColor4f *)makeLerpOther:(SharedSkikoColor4f *)other weight:(float)weight __attribute__((swift_name("makeLerp(other:weight:)")));
- (int32_t)toColor __attribute__((swift_name("toColor()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (SharedSkikoColor4f *)withA_a:(float)_a __attribute__((swift_name("withA(_a:)")));
- (SharedSkikoColor4f *)withB_b:(float)_b __attribute__((swift_name("withB(_b:)")));
- (SharedSkikoColor4f *)withG_g:(float)_g __attribute__((swift_name("withG(_g:)")));
- (SharedSkikoColor4f *)withR_r:(float)_r __attribute__((swift_name("withR(_r:)")));
@property (readonly) float a __attribute__((swift_name("a")));
@property (readonly) float b __attribute__((swift_name("b")));
@property (readonly) float g __attribute__((swift_name("g")));
@property (readonly) float r __attribute__((swift_name("r")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoColorSpace")))
@interface SharedSkikoColorSpace : SharedSkikoManaged
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedSkikoColorSpaceCompanion *companion __attribute__((swift_name("companion")));
- (SharedSkikoColor4f *)convertToColor:(SharedSkikoColorSpace * _Nullable)toColor color:(SharedSkikoColor4f *)color __attribute__((swift_name("convert(toColor:color:)")));
@property (readonly) BOOL isGammaCloseToSRGB __attribute__((swift_name("isGammaCloseToSRGB")));
@property (readonly) BOOL isGammaLinear __attribute__((swift_name("isGammaLinear")));
@property (readonly) BOOL isSRGB __attribute__((swift_name("isSRGB")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface SharedKotlinEnum<E> : SharedBase <SharedKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoBlendMode")))
@interface SharedSkikoBlendMode : SharedKotlinEnum<SharedSkikoBlendMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedSkikoBlendMode *clear __attribute__((swift_name("clear")));
@property (class, readonly) SharedSkikoBlendMode *src __attribute__((swift_name("src")));
@property (class, readonly) SharedSkikoBlendMode *dst __attribute__((swift_name("dst")));
@property (class, readonly) SharedSkikoBlendMode *srcOver __attribute__((swift_name("srcOver")));
@property (class, readonly) SharedSkikoBlendMode *dstOver __attribute__((swift_name("dstOver")));
@property (class, readonly) SharedSkikoBlendMode *srcIn __attribute__((swift_name("srcIn")));
@property (class, readonly) SharedSkikoBlendMode *dstIn __attribute__((swift_name("dstIn")));
@property (class, readonly) SharedSkikoBlendMode *srcOut __attribute__((swift_name("srcOut")));
@property (class, readonly) SharedSkikoBlendMode *dstOut __attribute__((swift_name("dstOut")));
@property (class, readonly) SharedSkikoBlendMode *srcAtop __attribute__((swift_name("srcAtop")));
@property (class, readonly) SharedSkikoBlendMode *dstAtop __attribute__((swift_name("dstAtop")));
@property (class, readonly) SharedSkikoBlendMode *xor_ __attribute__((swift_name("xor_")));
@property (class, readonly) SharedSkikoBlendMode *plus __attribute__((swift_name("plus")));
@property (class, readonly) SharedSkikoBlendMode *modulate __attribute__((swift_name("modulate")));
@property (class, readonly) SharedSkikoBlendMode *screen __attribute__((swift_name("screen")));
@property (class, readonly) SharedSkikoBlendMode *overlay __attribute__((swift_name("overlay")));
@property (class, readonly) SharedSkikoBlendMode *darken __attribute__((swift_name("darken")));
@property (class, readonly) SharedSkikoBlendMode *lighten __attribute__((swift_name("lighten")));
@property (class, readonly) SharedSkikoBlendMode *colorDodge __attribute__((swift_name("colorDodge")));
@property (class, readonly) SharedSkikoBlendMode *colorBurn __attribute__((swift_name("colorBurn")));
@property (class, readonly) SharedSkikoBlendMode *hardLight __attribute__((swift_name("hardLight")));
@property (class, readonly) SharedSkikoBlendMode *softLight __attribute__((swift_name("softLight")));
@property (class, readonly) SharedSkikoBlendMode *difference __attribute__((swift_name("difference")));
@property (class, readonly) SharedSkikoBlendMode *exclusion __attribute__((swift_name("exclusion")));
@property (class, readonly) SharedSkikoBlendMode *multiply __attribute__((swift_name("multiply")));
@property (class, readonly) SharedSkikoBlendMode *hue __attribute__((swift_name("hue")));
@property (class, readonly) SharedSkikoBlendMode *saturation __attribute__((swift_name("saturation")));
@property (class, readonly) SharedSkikoBlendMode *color __attribute__((swift_name("color")));
@property (class, readonly) SharedSkikoBlendMode *luminosity __attribute__((swift_name("luminosity")));
+ (SharedKotlinArray<SharedSkikoBlendMode *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoColorFilter")))
@interface SharedSkikoColorFilter : SharedSkikoRefCnt

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr allowClose:(BOOL)allowClose __attribute__((swift_name("init(ptr:allowClose:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedSkikoColorFilterCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoImageFilter")))
@interface SharedSkikoImageFilter : SharedSkikoRefCnt

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr allowClose:(BOOL)allowClose __attribute__((swift_name("init(ptr:allowClose:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedSkikoImageFilterCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoMaskFilter")))
@interface SharedSkikoMaskFilter : SharedSkikoRefCnt

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr allowClose:(BOOL)allowClose __attribute__((swift_name("init(ptr:allowClose:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedSkikoMaskFilterCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPaintMode")))
@interface SharedSkikoPaintMode : SharedKotlinEnum<SharedSkikoPaintMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedSkikoPaintMode *fill __attribute__((swift_name("fill")));
@property (class, readonly) SharedSkikoPaintMode *stroke __attribute__((swift_name("stroke")));
@property (class, readonly) SharedSkikoPaintMode *strokeAndFill __attribute__((swift_name("strokeAndFill")));
+ (SharedKotlinArray<SharedSkikoPaintMode *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPathEffect")))
@interface SharedSkikoPathEffect : SharedSkikoRefCnt

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr allowClose:(BOOL)allowClose __attribute__((swift_name("init(ptr:allowClose:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedSkikoPathEffectCompanion *companion __attribute__((swift_name("companion")));
- (SharedSkikoPathEffect *)makeComposeInner:(SharedSkikoPathEffect * _Nullable)inner __attribute__((swift_name("makeCompose(inner:)")));
- (SharedSkikoPathEffect *)makeSumSecond:(SharedSkikoPathEffect * _Nullable)second __attribute__((swift_name("makeSum(second:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPaintStrokeCap")))
@interface SharedSkikoPaintStrokeCap : SharedKotlinEnum<SharedSkikoPaintStrokeCap *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedSkikoPaintStrokeCap *butt __attribute__((swift_name("butt")));
@property (class, readonly) SharedSkikoPaintStrokeCap *round __attribute__((swift_name("round")));
@property (class, readonly) SharedSkikoPaintStrokeCap *square __attribute__((swift_name("square")));
+ (SharedKotlinArray<SharedSkikoPaintStrokeCap *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPaintStrokeJoin")))
@interface SharedSkikoPaintStrokeJoin : SharedKotlinEnum<SharedSkikoPaintStrokeJoin *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedSkikoPaintStrokeJoin *miter __attribute__((swift_name("miter")));
@property (class, readonly) SharedSkikoPaintStrokeJoin *round __attribute__((swift_name("round")));
@property (class, readonly) SharedSkikoPaintStrokeJoin *bevel __attribute__((swift_name("bevel")));
+ (SharedKotlinArray<SharedSkikoPaintStrokeJoin *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_graphicsColorFilter.Companion")))
@interface SharedUi_graphicsColorFilterCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedUi_graphicsColorFilterCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (SharedUi_graphicsColorFilter *)colorMatrixColorMatrix:(id)colorMatrix __attribute__((swift_name("colorMatrix(colorMatrix:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (SharedUi_graphicsColorFilter *)lightingMultiply:(uint64_t)multiply add:(uint64_t)add __attribute__((swift_name("lighting(multiply:add:)")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
- (SharedUi_graphicsColorFilter *)tintColor:(uint64_t)color blendMode:(int32_t)blendMode __attribute__((swift_name("tint(color:blendMode:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoShader.Companion")))
@interface SharedSkikoShaderCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSkikoShaderCompanion *shared __attribute__((swift_name("shared")));
- (SharedSkikoShader *)makeBlendMode:(SharedSkikoBlendMode *)mode dst:(SharedSkikoShader * _Nullable)dst src:(SharedSkikoShader * _Nullable)src __attribute__((swift_name("makeBlend(mode:dst:src:)")));
- (SharedSkikoShader *)makeColorColor:(int32_t)color __attribute__((swift_name("makeColor(color:)")));
- (SharedSkikoShader *)makeColorColor:(SharedSkikoColor4f *)color space:(SharedSkikoColorSpace * _Nullable)space __attribute__((swift_name("makeColor(color:space:)")));
- (SharedSkikoShader *)makeEmpty __attribute__((swift_name("makeEmpty()")));
- (SharedSkikoShader *)makeFractalNoiseBaseFrequencyX:(float)baseFrequencyX baseFrequencyY:(float)baseFrequencyY numOctaves:(int32_t)numOctaves seed:(float)seed tileSize:(SharedSkikoISize *)tileSize __attribute__((swift_name("makeFractalNoise(baseFrequencyX:baseFrequencyY:numOctaves:seed:tileSize:)")));
- (SharedSkikoShader *)makeLinearGradientX0:(float)x0 y0:(float)y0 x1:(float)x1 y1:(float)y1 colors:(SharedKotlinArray<SharedSkikoColor4f *> *)colors cs:(SharedSkikoColorSpace * _Nullable)cs positions:(SharedKotlinFloatArray * _Nullable)positions style:(SharedSkikoGradientStyle *)style __attribute__((swift_name("makeLinearGradient(x0:y0:x1:y1:colors:cs:positions:style:)")));
- (SharedSkikoShader *)makeLinearGradientX0:(float)x0 y0:(float)y0 x1:(float)x1 y1:(float)y1 colors:(SharedKotlinIntArray *)colors positions:(SharedKotlinFloatArray * _Nullable)positions style:(SharedSkikoGradientStyle *)style __attribute__((swift_name("makeLinearGradient(x0:y0:x1:y1:colors:positions:style:)")));
- (SharedSkikoShader *)makeLinearGradientP0:(SharedSkikoPoint *)p0 p1:(SharedSkikoPoint *)p1 colors:(SharedKotlinArray<SharedSkikoColor4f *> *)colors cs:(SharedSkikoColorSpace * _Nullable)cs positions:(SharedKotlinFloatArray * _Nullable)positions style:(SharedSkikoGradientStyle *)style __attribute__((swift_name("makeLinearGradient(p0:p1:colors:cs:positions:style:)")));
- (SharedSkikoShader *)makeLinearGradientP0:(SharedSkikoPoint *)p0 p1:(SharedSkikoPoint *)p1 colors:(SharedKotlinIntArray *)colors __attribute__((swift_name("makeLinearGradient(p0:p1:colors:)")));
- (SharedSkikoShader *)makeLinearGradientP0:(SharedSkikoPoint *)p0 p1:(SharedSkikoPoint *)p1 colors:(SharedKotlinIntArray *)colors positions:(SharedKotlinFloatArray * _Nullable)positions __attribute__((swift_name("makeLinearGradient(p0:p1:colors:positions:)")));
- (SharedSkikoShader *)makeLinearGradientP0:(SharedSkikoPoint *)p0 p1:(SharedSkikoPoint *)p1 colors:(SharedKotlinIntArray *)colors positions:(SharedKotlinFloatArray * _Nullable)positions style:(SharedSkikoGradientStyle *)style __attribute__((swift_name("makeLinearGradient(p0:p1:colors:positions:style:)")));
- (SharedSkikoShader *)makeRadialGradientX:(float)x y:(float)y r:(float)r colors:(SharedKotlinArray<SharedSkikoColor4f *> *)colors cs:(SharedSkikoColorSpace * _Nullable)cs positions:(SharedKotlinFloatArray * _Nullable)positions style:(SharedSkikoGradientStyle *)style __attribute__((swift_name("makeRadialGradient(x:y:r:colors:cs:positions:style:)")));
- (SharedSkikoShader *)makeRadialGradientX:(float)x y:(float)y r:(float)r colors:(SharedKotlinIntArray *)colors positions:(SharedKotlinFloatArray * _Nullable)positions style:(SharedSkikoGradientStyle *)style __attribute__((swift_name("makeRadialGradient(x:y:r:colors:positions:style:)")));
- (SharedSkikoShader *)makeRadialGradientCenter:(SharedSkikoPoint *)center r:(float)r colors:(SharedKotlinArray<SharedSkikoColor4f *> *)colors cs:(SharedSkikoColorSpace * _Nullable)cs positions:(SharedKotlinFloatArray * _Nullable)positions style:(SharedSkikoGradientStyle *)style __attribute__((swift_name("makeRadialGradient(center:r:colors:cs:positions:style:)")));
- (SharedSkikoShader *)makeRadialGradientCenter:(SharedSkikoPoint *)center r:(float)r colors:(SharedKotlinIntArray *)colors __attribute__((swift_name("makeRadialGradient(center:r:colors:)")));
- (SharedSkikoShader *)makeRadialGradientCenter:(SharedSkikoPoint *)center r:(float)r colors:(SharedKotlinIntArray *)colors positions:(SharedKotlinFloatArray * _Nullable)positions __attribute__((swift_name("makeRadialGradient(center:r:colors:positions:)")));
- (SharedSkikoShader *)makeRadialGradientCenter:(SharedSkikoPoint *)center r:(float)r colors:(SharedKotlinIntArray *)colors positions:(SharedKotlinFloatArray * _Nullable)positions style:(SharedSkikoGradientStyle *)style __attribute__((swift_name("makeRadialGradient(center:r:colors:positions:style:)")));
- (SharedSkikoShader *)makeSweepGradientX:(float)x y:(float)y startAngle:(float)startAngle endAngle:(float)endAngle colors:(SharedKotlinArray<SharedSkikoColor4f *> *)colors cs:(SharedSkikoColorSpace * _Nullable)cs positions:(SharedKotlinFloatArray * _Nullable)positions style:(SharedSkikoGradientStyle *)style __attribute__((swift_name("makeSweepGradient(x:y:startAngle:endAngle:colors:cs:positions:style:)")));
- (SharedSkikoShader *)makeSweepGradientX:(float)x y:(float)y startAngle:(float)startAngle endAngle:(float)endAngle colors:(SharedKotlinIntArray *)colors positions:(SharedKotlinFloatArray * _Nullable)positions style:(SharedSkikoGradientStyle *)style __attribute__((swift_name("makeSweepGradient(x:y:startAngle:endAngle:colors:positions:style:)")));
- (SharedSkikoShader *)makeSweepGradientX:(float)x y:(float)y colors:(SharedKotlinIntArray *)colors __attribute__((swift_name("makeSweepGradient(x:y:colors:)")));
- (SharedSkikoShader *)makeSweepGradientX:(float)x y:(float)y colors:(SharedKotlinIntArray *)colors positions:(SharedKotlinFloatArray * _Nullable)positions __attribute__((swift_name("makeSweepGradient(x:y:colors:positions:)")));
- (SharedSkikoShader *)makeSweepGradientX:(float)x y:(float)y colors:(SharedKotlinIntArray *)colors positions:(SharedKotlinFloatArray * _Nullable)positions style:(SharedSkikoGradientStyle *)style __attribute__((swift_name("makeSweepGradient(x:y:colors:positions:style:)")));
- (SharedSkikoShader *)makeSweepGradientCenter:(SharedSkikoPoint *)center startAngle:(float)startAngle endAngle:(float)endAngle colors:(SharedKotlinArray<SharedSkikoColor4f *> *)colors cs:(SharedSkikoColorSpace * _Nullable)cs positions:(SharedKotlinFloatArray * _Nullable)positions style:(SharedSkikoGradientStyle *)style __attribute__((swift_name("makeSweepGradient(center:startAngle:endAngle:colors:cs:positions:style:)")));
- (SharedSkikoShader *)makeSweepGradientCenter:(SharedSkikoPoint *)center startAngle:(float)startAngle endAngle:(float)endAngle colors:(SharedKotlinIntArray *)colors positions:(SharedKotlinFloatArray * _Nullable)positions style:(SharedSkikoGradientStyle *)style __attribute__((swift_name("makeSweepGradient(center:startAngle:endAngle:colors:positions:style:)")));
- (SharedSkikoShader *)makeSweepGradientCenter:(SharedSkikoPoint *)center colors:(SharedKotlinIntArray *)colors __attribute__((swift_name("makeSweepGradient(center:colors:)")));
- (SharedSkikoShader *)makeSweepGradientCenter:(SharedSkikoPoint *)center colors:(SharedKotlinIntArray *)colors positions:(SharedKotlinFloatArray * _Nullable)positions __attribute__((swift_name("makeSweepGradient(center:colors:positions:)")));
- (SharedSkikoShader *)makeSweepGradientCenter:(SharedSkikoPoint *)center colors:(SharedKotlinIntArray *)colors positions:(SharedKotlinFloatArray * _Nullable)positions style:(SharedSkikoGradientStyle *)style __attribute__((swift_name("makeSweepGradient(center:colors:positions:style:)")));
- (SharedSkikoShader *)makeTurbulenceBaseFrequencyX:(float)baseFrequencyX baseFrequencyY:(float)baseFrequencyY numOctaves:(int32_t)numOctaves seed:(float)seed tileSize:(SharedSkikoISize *)tileSize __attribute__((swift_name("makeTurbulence(baseFrequencyX:baseFrequencyY:numOctaves:seed:tileSize:)")));
- (SharedSkikoShader *)makeTwoPointConicalGradientX0:(float)x0 y0:(float)y0 r0:(float)r0 x1:(float)x1 y1:(float)y1 r1:(float)r1 colors:(SharedKotlinArray<SharedSkikoColor4f *> *)colors cs:(SharedSkikoColorSpace * _Nullable)cs positions:(SharedKotlinFloatArray * _Nullable)positions style:(SharedSkikoGradientStyle *)style __attribute__((swift_name("makeTwoPointConicalGradient(x0:y0:r0:x1:y1:r1:colors:cs:positions:style:)")));
- (SharedSkikoShader *)makeTwoPointConicalGradientX0:(float)x0 y0:(float)y0 r0:(float)r0 x1:(float)x1 y1:(float)y1 r1:(float)r1 colors:(SharedKotlinIntArray *)colors positions:(SharedKotlinFloatArray * _Nullable)positions style:(SharedSkikoGradientStyle *)style __attribute__((swift_name("makeTwoPointConicalGradient(x0:y0:r0:x1:y1:r1:colors:positions:style:)")));
- (SharedSkikoShader *)makeTwoPointConicalGradientP0:(SharedSkikoPoint *)p0 r0:(float)r0 p1:(SharedSkikoPoint *)p1 r1:(float)r1 colors:(SharedKotlinArray<SharedSkikoColor4f *> *)colors cs:(SharedSkikoColorSpace * _Nullable)cs positions:(SharedKotlinFloatArray * _Nullable)positions style:(SharedSkikoGradientStyle *)style __attribute__((swift_name("makeTwoPointConicalGradient(p0:r0:p1:r1:colors:cs:positions:style:)")));
- (SharedSkikoShader *)makeTwoPointConicalGradientP0:(SharedSkikoPoint *)p0 r0:(float)r0 p1:(SharedSkikoPoint *)p1 r1:(float)r1 colors:(SharedKotlinIntArray *)colors __attribute__((swift_name("makeTwoPointConicalGradient(p0:r0:p1:r1:colors:)")));
- (SharedSkikoShader *)makeTwoPointConicalGradientP0:(SharedSkikoPoint *)p0 r0:(float)r0 p1:(SharedSkikoPoint *)p1 r1:(float)r1 colors:(SharedKotlinIntArray *)colors positions:(SharedKotlinFloatArray * _Nullable)positions __attribute__((swift_name("makeTwoPointConicalGradient(p0:r0:p1:r1:colors:positions:)")));
- (SharedSkikoShader *)makeTwoPointConicalGradientP0:(SharedSkikoPoint *)p0 r0:(float)r0 p1:(SharedSkikoPoint *)p1 r1:(float)r1 colors:(SharedKotlinIntArray *)colors positions:(SharedKotlinFloatArray * _Nullable)positions style:(SharedSkikoGradientStyle *)style __attribute__((swift_name("makeTwoPointConicalGradient(p0:r0:p1:r1:colors:positions:style:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinFloatArray")))
@interface SharedKotlinFloatArray : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(SharedFloat *(^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (float)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (SharedKotlinFloatIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(float)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoColor4f.Companion")))
@interface SharedSkikoColor4fCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSkikoColor4fCompanion *shared __attribute__((swift_name("shared")));
- (SharedKotlinFloatArray *)flattenArrayColors:(SharedKotlinArray<SharedSkikoColor4f *> *)colors __attribute__((swift_name("flattenArray(colors:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoColorSpace.Companion")))
@interface SharedSkikoColorSpaceCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSkikoColorSpaceCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedSkikoColorSpace *displayP3 __attribute__((swift_name("displayP3")));
@property (readonly) SharedSkikoColorSpace *sRGB __attribute__((swift_name("sRGB")));
@property (readonly) SharedSkikoColorSpace *sRGBLinear __attribute__((swift_name("sRGBLinear")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface SharedKotlinEnumCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoColorFilter.Companion")))
@interface SharedSkikoColorFilterCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSkikoColorFilterCompanion *shared __attribute__((swift_name("shared")));
- (SharedSkikoColorFilter *)makeBlendColor:(int32_t)color mode:(SharedSkikoBlendMode *)mode __attribute__((swift_name("makeBlend(color:mode:)")));
- (SharedSkikoColorFilter *)makeComposedOuter:(SharedSkikoColorFilter * _Nullable)outer inner:(SharedSkikoColorFilter * _Nullable)inner __attribute__((swift_name("makeComposed(outer:inner:)")));
- (SharedSkikoColorFilter *)makeHSLAMatrixMatrix:(SharedSkikoColorMatrix *)matrix __attribute__((swift_name("makeHSLAMatrix(matrix:)")));
- (SharedSkikoColorFilter *)makeHighContrastGrayscale:(BOOL)grayscale mode:(SharedSkikoInversionMode *)mode contrast:(float)contrast __attribute__((swift_name("makeHighContrast(grayscale:mode:contrast:)")));
- (SharedSkikoColorFilter *)makeLerpDst:(SharedSkikoColorFilter * _Nullable)dst src:(SharedSkikoColorFilter * _Nullable)src t:(float)t __attribute__((swift_name("makeLerp(dst:src:t:)")));
- (SharedSkikoColorFilter *)makeLightingColorMul:(int32_t)colorMul colorAdd:(int32_t)colorAdd __attribute__((swift_name("makeLighting(colorMul:colorAdd:)")));
- (SharedSkikoColorFilter *)makeMatrixMatrix:(SharedSkikoColorMatrix *)matrix __attribute__((swift_name("makeMatrix(matrix:)")));
- (SharedSkikoColorFilter *)makeOverdrawColors:(SharedKotlinIntArray *)colors __attribute__((swift_name("makeOverdraw(colors:)")));
- (SharedSkikoColorFilter *)makeTableTable:(SharedKotlinByteArray *)table __attribute__((swift_name("makeTable(table:)")));
- (SharedSkikoColorFilter *)makeTableARGBA:(SharedKotlinByteArray * _Nullable)a r:(SharedKotlinByteArray * _Nullable)r g:(SharedKotlinByteArray * _Nullable)g b:(SharedKotlinByteArray * _Nullable)b __attribute__((swift_name("makeTableARGB(a:r:g:b:)")));
@property (readonly) SharedSkikoColorFilter *luma __attribute__((swift_name("luma")));
@property (readonly) SharedSkikoColorFilter *sRGBToLinearGamma __attribute__((swift_name("sRGBToLinearGamma")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoImageFilter.Companion")))
@interface SharedSkikoImageFilterCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSkikoImageFilterCompanion *shared __attribute__((swift_name("shared")));
- (SharedSkikoImageFilter *)makeAlphaThresholdR:(SharedSkikoRegion * _Nullable)r innerMin:(float)innerMin outerMax:(float)outerMax input:(SharedSkikoImageFilter * _Nullable)input crop:(SharedSkikoIRect * _Nullable)crop __attribute__((swift_name("makeAlphaThreshold(r:innerMin:outerMax:input:crop:)")));
- (SharedSkikoImageFilter *)makeArithmeticK1:(float)k1 k2:(float)k2 k3:(float)k3 k4:(float)k4 enforcePMColor:(BOOL)enforcePMColor bg:(SharedSkikoImageFilter * _Nullable)bg fg:(SharedSkikoImageFilter * _Nullable)fg crop:(SharedSkikoIRect * _Nullable)crop __attribute__((swift_name("makeArithmetic(k1:k2:k3:k4:enforcePMColor:bg:fg:crop:)")));
- (SharedSkikoImageFilter *)makeBlendBlendMode:(SharedSkikoBlendMode *)blendMode bg:(SharedSkikoImageFilter * _Nullable)bg fg:(SharedSkikoImageFilter * _Nullable)fg crop:(SharedSkikoIRect * _Nullable)crop __attribute__((swift_name("makeBlend(blendMode:bg:fg:crop:)")));
- (SharedSkikoImageFilter *)makeBlurSigmaX:(float)sigmaX sigmaY:(float)sigmaY mode:(SharedSkikoFilterTileMode *)mode input:(SharedSkikoImageFilter * _Nullable)input crop:(SharedSkikoIRect * _Nullable)crop __attribute__((swift_name("makeBlur(sigmaX:sigmaY:mode:input:crop:)")));
- (SharedSkikoImageFilter *)makeColorFilterF:(SharedSkikoColorFilter * _Nullable)f input:(SharedSkikoImageFilter * _Nullable)input crop:(SharedSkikoIRect * _Nullable)crop __attribute__((swift_name("makeColorFilter(f:input:crop:)")));
- (SharedSkikoImageFilter *)makeComposeOuter:(SharedSkikoImageFilter * _Nullable)outer inner:(SharedSkikoImageFilter * _Nullable)inner __attribute__((swift_name("makeCompose(outer:inner:)")));
- (SharedSkikoImageFilter *)makeDilateRx:(float)rx ry:(float)ry input:(SharedSkikoImageFilter * _Nullable)input crop:(SharedSkikoIRect * _Nullable)crop __attribute__((swift_name("makeDilate(rx:ry:input:crop:)")));
- (SharedSkikoImageFilter *)makeDisplacementMapX:(SharedSkikoColorChannel *)x y:(SharedSkikoColorChannel *)y scale:(float)scale displacement:(SharedSkikoImageFilter * _Nullable)displacement color:(SharedSkikoImageFilter * _Nullable)color crop:(SharedSkikoIRect * _Nullable)crop __attribute__((swift_name("makeDisplacementMap(x:y:scale:displacement:color:crop:)")));
- (SharedSkikoImageFilter *)makeDistantLitDiffuseX:(float)x y:(float)y z:(float)z lightColor:(int32_t)lightColor surfaceScale:(float)surfaceScale kd:(float)kd input:(SharedSkikoImageFilter * _Nullable)input crop:(SharedSkikoIRect * _Nullable)crop __attribute__((swift_name("makeDistantLitDiffuse(x:y:z:lightColor:surfaceScale:kd:input:crop:)")));
- (SharedSkikoImageFilter *)makeDistantLitSpecularX:(float)x y:(float)y z:(float)z lightColor:(int32_t)lightColor surfaceScale:(float)surfaceScale ks:(float)ks shininess:(float)shininess input:(SharedSkikoImageFilter * _Nullable)input crop:(SharedSkikoIRect * _Nullable)crop __attribute__((swift_name("makeDistantLitSpecular(x:y:z:lightColor:surfaceScale:ks:shininess:input:crop:)")));
- (SharedSkikoImageFilter *)makeDropShadowDx:(float)dx dy:(float)dy sigmaX:(float)sigmaX sigmaY:(float)sigmaY color:(int32_t)color input:(SharedSkikoImageFilter * _Nullable)input crop:(SharedSkikoIRect * _Nullable)crop __attribute__((swift_name("makeDropShadow(dx:dy:sigmaX:sigmaY:color:input:crop:)")));
- (SharedSkikoImageFilter *)makeDropShadowOnlyDx:(float)dx dy:(float)dy sigmaX:(float)sigmaX sigmaY:(float)sigmaY color:(int32_t)color input:(SharedSkikoImageFilter * _Nullable)input crop:(SharedSkikoIRect * _Nullable)crop __attribute__((swift_name("makeDropShadowOnly(dx:dy:sigmaX:sigmaY:color:input:crop:)")));
- (SharedSkikoImageFilter *)makeErodeRx:(float)rx ry:(float)ry input:(SharedSkikoImageFilter * _Nullable)input crop:(SharedSkikoIRect * _Nullable)crop __attribute__((swift_name("makeErode(rx:ry:input:crop:)")));
- (SharedSkikoImageFilter *)makeImageImage:(SharedSkikoImage *)image __attribute__((swift_name("makeImage(image:)")));
- (SharedSkikoImageFilter *)makeImageImage:(SharedSkikoImage * _Nullable)image src:(SharedSkikoRect *)src dst:(SharedSkikoRect *)dst mode:(id<SharedSkikoSamplingMode>)mode __attribute__((swift_name("makeImage(image:src:dst:mode:)")));
- (SharedSkikoImageFilter *)makeMagnifierR:(SharedSkikoRect *)r inset:(float)inset input:(SharedSkikoImageFilter * _Nullable)input crop:(SharedSkikoIRect * _Nullable)crop __attribute__((swift_name("makeMagnifier(r:inset:input:crop:)")));
- (SharedSkikoImageFilter *)makeMatrixConvolutionKernelW:(int32_t)kernelW kernelH:(int32_t)kernelH kernel:(SharedKotlinFloatArray * _Nullable)kernel gain:(float)gain bias:(float)bias offsetX:(int32_t)offsetX offsetY:(int32_t)offsetY tileMode:(SharedSkikoFilterTileMode *)tileMode convolveAlpha:(BOOL)convolveAlpha input:(SharedSkikoImageFilter * _Nullable)input crop:(SharedSkikoIRect * _Nullable)crop __attribute__((swift_name("makeMatrixConvolution(kernelW:kernelH:kernel:gain:bias:offsetX:offsetY:tileMode:convolveAlpha:input:crop:)")));
- (SharedSkikoImageFilter *)makeMatrixTransformMatrix:(SharedSkikoMatrix33 *)matrix mode:(id<SharedSkikoSamplingMode>)mode input:(SharedSkikoImageFilter * _Nullable)input __attribute__((swift_name("makeMatrixTransform(matrix:mode:input:)")));
- (SharedSkikoImageFilter *)makeMergeFilters:(SharedKotlinArray<SharedSkikoImageFilter *> *)filters crop:(SharedSkikoIRect * _Nullable)crop __attribute__((swift_name("makeMerge(filters:crop:)")));
- (SharedSkikoImageFilter *)makeOffsetDx:(float)dx dy:(float)dy input:(SharedSkikoImageFilter * _Nullable)input crop:(SharedSkikoIRect * _Nullable)crop __attribute__((swift_name("makeOffset(dx:dy:input:crop:)")));
- (SharedSkikoImageFilter *)makePointLitDiffuseX:(float)x y:(float)y z:(float)z lightColor:(int32_t)lightColor surfaceScale:(float)surfaceScale kd:(float)kd input:(SharedSkikoImageFilter * _Nullable)input crop:(SharedSkikoIRect * _Nullable)crop __attribute__((swift_name("makePointLitDiffuse(x:y:z:lightColor:surfaceScale:kd:input:crop:)")));
- (SharedSkikoImageFilter *)makePointLitSpecularX:(float)x y:(float)y z:(float)z lightColor:(int32_t)lightColor surfaceScale:(float)surfaceScale ks:(float)ks shininess:(float)shininess input:(SharedSkikoImageFilter * _Nullable)input crop:(SharedSkikoIRect * _Nullable)crop __attribute__((swift_name("makePointLitSpecular(x:y:z:lightColor:surfaceScale:ks:shininess:input:crop:)")));
- (SharedSkikoImageFilter *)makeRuntimeShaderRuntimeShaderBuilder:(SharedSkikoRuntimeShaderBuilder *)runtimeShaderBuilder shaderNames:(SharedKotlinArray<NSString *> *)shaderNames inputs:(SharedKotlinArray<SharedSkikoImageFilter *> *)inputs __attribute__((swift_name("makeRuntimeShader(runtimeShaderBuilder:shaderNames:inputs:)")));
- (SharedSkikoImageFilter *)makeRuntimeShaderRuntimeShaderBuilder:(SharedSkikoRuntimeShaderBuilder *)runtimeShaderBuilder shaderName:(NSString *)shaderName input:(SharedSkikoImageFilter * _Nullable)input __attribute__((swift_name("makeRuntimeShader(runtimeShaderBuilder:shaderName:input:)")));
- (SharedSkikoImageFilter *)makeShaderShader:(SharedSkikoShader *)shader dither:(BOOL)dither crop:(SharedSkikoIRect * _Nullable)crop __attribute__((swift_name("makeShader(shader:dither:crop:)")));
- (SharedSkikoImageFilter *)makeSpotLitDiffuseX0:(float)x0 y0:(float)y0 z0:(float)z0 x1:(float)x1 y1:(float)y1 z1:(float)z1 falloffExponent:(float)falloffExponent cutoffAngle:(float)cutoffAngle lightColor:(int32_t)lightColor surfaceScale:(float)surfaceScale kd:(float)kd input:(SharedSkikoImageFilter * _Nullable)input crop:(SharedSkikoIRect * _Nullable)crop __attribute__((swift_name("makeSpotLitDiffuse(x0:y0:z0:x1:y1:z1:falloffExponent:cutoffAngle:lightColor:surfaceScale:kd:input:crop:)")));
- (SharedSkikoImageFilter *)makeSpotLitSpecularX0:(float)x0 y0:(float)y0 z0:(float)z0 x1:(float)x1 y1:(float)y1 z1:(float)z1 falloffExponent:(float)falloffExponent cutoffAngle:(float)cutoffAngle lightColor:(int32_t)lightColor surfaceScale:(float)surfaceScale ks:(float)ks shininess:(float)shininess input:(SharedSkikoImageFilter * _Nullable)input crop:(SharedSkikoIRect * _Nullable)crop __attribute__((swift_name("makeSpotLitSpecular(x0:y0:z0:x1:y1:z1:falloffExponent:cutoffAngle:lightColor:surfaceScale:ks:shininess:input:crop:)")));
- (SharedSkikoImageFilter *)makeTileSrc:(SharedSkikoRect *)src dst:(SharedSkikoRect *)dst input:(SharedSkikoImageFilter * _Nullable)input __attribute__((swift_name("makeTile(src:dst:input:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoMaskFilter.Companion")))
@interface SharedSkikoMaskFilterCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSkikoMaskFilterCompanion *shared __attribute__((swift_name("shared")));
- (SharedSkikoMaskFilter *)makeBlurMode:(SharedSkikoFilterBlurMode *)mode sigma:(float)sigma respectCTM:(BOOL)respectCTM __attribute__((swift_name("makeBlur(mode:sigma:respectCTM:)")));
- (SharedSkikoMaskFilter *)makeClipMin:(int32_t)min max:(int32_t)max __attribute__((swift_name("makeClip(min:max:)")));
- (SharedSkikoMaskFilter *)makeGammaGamma:(float)gamma __attribute__((swift_name("makeGamma(gamma:)")));
- (SharedSkikoMaskFilter *)makeShaderS:(SharedSkikoShader * _Nullable)s __attribute__((swift_name("makeShader(s:)")));
- (SharedSkikoMaskFilter *)makeTableTable:(SharedKotlinByteArray *)table __attribute__((swift_name("makeTable(table:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPathEffect.Companion")))
@interface SharedSkikoPathEffectCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSkikoPathEffectCompanion *shared __attribute__((swift_name("shared")));
- (SharedSkikoPathEffect *)makeCornerRadius:(float)radius __attribute__((swift_name("makeCorner(radius:)")));
- (SharedSkikoPathEffect *)makeDashIntervals:(SharedKotlinFloatArray *)intervals phase:(float)phase __attribute__((swift_name("makeDash(intervals:phase:)")));
- (SharedSkikoPathEffect *)makeDiscreteSegLength:(float)segLength dev:(float)dev seed:(int32_t)seed __attribute__((swift_name("makeDiscrete(segLength:dev:seed:)")));
- (SharedSkikoPathEffect *)makeLine2DWidth:(float)width matrix:(SharedSkikoMatrix33 *)matrix __attribute__((swift_name("makeLine2D(width:matrix:)")));
- (SharedSkikoPathEffect *)makePath1DPath:(SharedSkikoPath *)path advance:(float)advance phase:(float)phase style:(SharedSkikoPathEffectStyle *)style __attribute__((swift_name("makePath1D(path:advance:phase:style:)")));
- (SharedSkikoPathEffect *)makePath2DMatrix:(SharedSkikoMatrix33 *)matrix path:(SharedSkikoPath *)path __attribute__((swift_name("makePath2D(matrix:path:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoISize")))
@interface SharedSkikoISize : SharedBase
@property (class, readonly, getter=companion) SharedSkikoISizeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)area __attribute__((swift_name("area()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (BOOL)isZero __attribute__((swift_name("isZero()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoGradientStyle")))
@interface SharedSkikoGradientStyle : SharedBase
- (instancetype)initWithTileMode:(SharedSkikoFilterTileMode *)tileMode isPremul:(BOOL)isPremul localMatrix:(SharedSkikoMatrix33 * _Nullable)localMatrix __attribute__((swift_name("init(tileMode:isPremul:localMatrix:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedSkikoGradientStyleCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (SharedSkikoGradientStyle *)withLocalMatrix_localMatrix:(SharedSkikoMatrix33 *)_localMatrix __attribute__((swift_name("withLocalMatrix(_localMatrix:)")));
- (SharedSkikoGradientStyle *)withPremul_premul:(BOOL)_premul __attribute__((swift_name("withPremul(_premul:)")));
- (SharedSkikoGradientStyle *)withTileMode_tileMode:(SharedSkikoFilterTileMode *)_tileMode __attribute__((swift_name("withTileMode(_tileMode:)")));
@property (readonly) BOOL isPremul __attribute__((swift_name("isPremul")));
@property (readonly) SharedSkikoMatrix33 * _Nullable localMatrix __attribute__((swift_name("localMatrix")));
@property (readonly) SharedSkikoFilterTileMode *tileMode __attribute__((swift_name("tileMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntArray")))
@interface SharedKotlinIntArray : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(SharedInt *(^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int32_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (SharedKotlinIntIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int32_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPoint")))
@interface SharedSkikoPoint : SharedBase
- (instancetype)initWithX:(float)x y:(float)y __attribute__((swift_name("init(x:y:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedSkikoPointCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedSkikoPoint *)offsetDx:(float)dx dy:(float)dy __attribute__((swift_name("offset(dx:dy:)")));
- (SharedSkikoPoint *)offsetVec:(SharedSkikoPoint *)vec __attribute__((swift_name("offset(vec:)")));
- (SharedSkikoPoint *)scaleScale:(float)scale __attribute__((swift_name("scale(scale:)")));
- (SharedSkikoPoint *)scaleSx:(float)sx sy:(float)sy __attribute__((swift_name("scale(sx:sy:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) float x __attribute__((swift_name("x")));
@property (readonly) float y __attribute__((swift_name("y")));
@end

__attribute__((swift_name("KotlinFloatIterator")))
@interface SharedKotlinFloatIterator : SharedBase <SharedKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedFloat *)next __attribute__((swift_name("next()")));
- (float)nextFloat __attribute__((swift_name("nextFloat()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoColorMatrix")))
@interface SharedSkikoColorMatrix : SharedBase
- (instancetype)initWithMat:(SharedKotlinFloatArray *)mat __attribute__((swift_name("init(mat:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKotlinFloatArray *mat __attribute__((swift_name("mat")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoInversionMode")))
@interface SharedSkikoInversionMode : SharedKotlinEnum<SharedSkikoInversionMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedSkikoInversionMode *no __attribute__((swift_name("no")));
@property (class, readonly) SharedSkikoInversionMode *brightness __attribute__((swift_name("brightness")));
@property (class, readonly) SharedSkikoInversionMode *lightness __attribute__((swift_name("lightness")));
+ (SharedKotlinArray<SharedSkikoInversionMode *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface SharedKotlinByteArray : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(SharedByte *(^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (SharedKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoRegion")))
@interface SharedSkikoRegion : SharedSkikoManaged
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedSkikoRegionCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)computeRegionComplexity __attribute__((swift_name("computeRegionComplexity()")));
- (BOOL)containsX:(int32_t)x y:(int32_t)y __attribute__((swift_name("contains(x:y:)")));
- (BOOL)containsRect:(SharedSkikoIRect *)rect __attribute__((swift_name("contains(rect:)")));
- (BOOL)containsR:(SharedSkikoRegion * _Nullable)r __attribute__((swift_name("contains(r:)")));
- (BOOL)getBoundaryPathP:(SharedSkikoPath * _Nullable)p __attribute__((swift_name("getBoundaryPath(p:)")));
- (BOOL)intersectsRect:(SharedSkikoIRect *)rect __attribute__((swift_name("intersects(rect:)")));
- (BOOL)intersectsR:(SharedSkikoRegion * _Nullable)r __attribute__((swift_name("intersects(r:)")));
- (BOOL)opRect:(SharedSkikoIRect *)rect op:(SharedSkikoRegionOp *)op __attribute__((swift_name("op(rect:op:)")));
- (BOOL)opRect:(SharedSkikoIRect *)rect r:(SharedSkikoRegion * _Nullable)r op:(SharedSkikoRegionOp *)op __attribute__((swift_name("op(rect:r:op:)")));
- (BOOL)opR:(SharedSkikoRegion * _Nullable)r rect:(SharedSkikoIRect *)rect op:(SharedSkikoRegionOp *)op __attribute__((swift_name("op(r:rect:op:)")));
- (BOOL)opR:(SharedSkikoRegion * _Nullable)r op:(SharedSkikoRegionOp *)op __attribute__((swift_name("op(r:op:)")));
- (BOOL)opA:(SharedSkikoRegion * _Nullable)a b:(SharedSkikoRegion * _Nullable)b op:(SharedSkikoRegionOp *)op __attribute__((swift_name("op(a:b:op:)")));
- (BOOL)quickContainsRect:(SharedSkikoIRect *)rect __attribute__((swift_name("quickContains(rect:)")));
- (BOOL)quickRejectRect:(SharedSkikoIRect *)rect __attribute__((swift_name("quickReject(rect:)")));
- (BOOL)quickRejectR:(SharedSkikoRegion * _Nullable)r __attribute__((swift_name("quickReject(r:)")));
- (BOOL)setR:(SharedSkikoRegion * _Nullable)r __attribute__((swift_name("set(r:)")));
- (BOOL)setEmpty __attribute__((swift_name("setEmpty()")));
- (BOOL)setPathPath:(SharedSkikoPath * _Nullable)path clip:(SharedSkikoRegion * _Nullable)clip __attribute__((swift_name("setPath(path:clip:)")));
- (BOOL)setRectRect:(SharedSkikoIRect *)rect __attribute__((swift_name("setRect(rect:)")));
- (BOOL)setRectsRects:(SharedKotlinArray<SharedSkikoIRect *> *)rects __attribute__((swift_name("setRects(rects:)")));
- (BOOL)setRegionR:(SharedSkikoRegion * _Nullable)r __attribute__((swift_name("setRegion(r:)")));
- (void)translateDx:(int32_t)dx dy:(int32_t)dy __attribute__((swift_name("translate(dx:dy:)")));
@property (readonly) SharedSkikoIRect *bounds __attribute__((swift_name("bounds")));
@property (readonly) BOOL isComplex __attribute__((swift_name("isComplex")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) BOOL isRect __attribute__((swift_name("isRect")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoIRect")))
@interface SharedSkikoIRect : SharedBase
@property (class, readonly, getter=companion) SharedSkikoIRectCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedSkikoIRect * _Nullable)intersectOther:(SharedSkikoIRect *)other __attribute__((swift_name("intersect(other:)")));
- (SharedSkikoIRect *)offsetDx:(int32_t)dx dy:(int32_t)dy __attribute__((swift_name("offset(dx:dy:)")));
- (SharedSkikoIRect *)offsetVec:(SharedSkikoIPoint *)vec __attribute__((swift_name("offset(vec:)")));
- (SharedSkikoRect *)toRect __attribute__((swift_name("toRect()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t bottom __attribute__((swift_name("bottom")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) int32_t left __attribute__((swift_name("left")));
@property (readonly) int32_t right __attribute__((swift_name("right")));
@property (readonly) int32_t top __attribute__((swift_name("top")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFilterTileMode")))
@interface SharedSkikoFilterTileMode : SharedKotlinEnum<SharedSkikoFilterTileMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedSkikoFilterTileMode *clamp __attribute__((swift_name("clamp")));
@property (class, readonly) SharedSkikoFilterTileMode *repeat __attribute__((swift_name("repeat")));
@property (class, readonly) SharedSkikoFilterTileMode *mirror __attribute__((swift_name("mirror")));
@property (class, readonly) SharedSkikoFilterTileMode *decal __attribute__((swift_name("decal")));
+ (SharedKotlinArray<SharedSkikoFilterTileMode *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoColorChannel")))
@interface SharedSkikoColorChannel : SharedKotlinEnum<SharedSkikoColorChannel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedSkikoColorChannel *r __attribute__((swift_name("r")));
@property (class, readonly) SharedSkikoColorChannel *g __attribute__((swift_name("g")));
@property (class, readonly) SharedSkikoColorChannel *b __attribute__((swift_name("b")));
@property (class, readonly) SharedSkikoColorChannel *a __attribute__((swift_name("a")));
+ (SharedKotlinArray<SharedSkikoColorChannel *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((swift_name("SkikoIHasImageInfo")))
@protocol SharedSkikoIHasImageInfo
@required
@property (readonly) SharedSkikoColorAlphaType *alphaType __attribute__((swift_name("alphaType")));
@property (readonly) int32_t bytesPerPixel __attribute__((swift_name("bytesPerPixel")));
@property (readonly) SharedSkikoColorInfo *colorInfo __attribute__((swift_name("colorInfo")));
@property (readonly) SharedSkikoColorSpace * _Nullable colorSpace __attribute__((swift_name("colorSpace")));
@property (readonly) SharedSkikoColorType *colorType __attribute__((swift_name("colorType")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) SharedSkikoImageInfo *imageInfo __attribute__((swift_name("imageInfo")));
@property (readonly, getter=isEmpty_) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) BOOL isOpaque __attribute__((swift_name("isOpaque")));
@property (readonly) int32_t shiftPerPixel __attribute__((swift_name("shiftPerPixel")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoImage")))
@interface SharedSkikoImage : SharedSkikoRefCnt <SharedSkikoIHasImageInfo>

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr allowClose:(BOOL)allowClose __attribute__((swift_name("init(ptr:allowClose:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedSkikoImageCompanion *companion __attribute__((swift_name("companion")));
- (SharedSkikoData * _Nullable)encodeToDataFormat:(SharedSkikoEncodedImageFormat *)format quality:(int32_t)quality __attribute__((swift_name("encodeToData(format:quality:)")));
- (SharedSkikoShader *)makeShaderTmx:(SharedSkikoFilterTileMode *)tmx tmy:(SharedSkikoFilterTileMode *)tmy localMatrix:(SharedSkikoMatrix33 * _Nullable)localMatrix __attribute__((swift_name("makeShader(tmx:tmy:localMatrix:)")));
- (SharedSkikoShader *)makeShaderTmx:(SharedSkikoFilterTileMode *)tmx tmy:(SharedSkikoFilterTileMode *)tmy sampling:(id<SharedSkikoSamplingMode>)sampling localMatrix:(SharedSkikoMatrix33 * _Nullable)localMatrix __attribute__((swift_name("makeShader(tmx:tmy:sampling:localMatrix:)")));
- (SharedSkikoShader *)makeShaderLocalMatrix:(SharedSkikoMatrix33 * _Nullable)localMatrix __attribute__((swift_name("makeShader(localMatrix:)")));
- (SharedSkikoPixmap * _Nullable)peekPixels __attribute__((swift_name("peekPixels()")));
- (BOOL)peekPixelsPixmap:(SharedSkikoPixmap * _Nullable)pixmap __attribute__((swift_name("peekPixels(pixmap:)")));
- (BOOL)readPixelsDst:(SharedSkikoBitmap *)dst __attribute__((swift_name("readPixels(dst:)")));
- (BOOL)readPixelsDst:(SharedSkikoBitmap *)dst srcX:(int32_t)srcX srcY:(int32_t)srcY __attribute__((swift_name("readPixels(dst:srcX:srcY:)")));
- (BOOL)readPixelsContext:(SharedSkikoDirectContext *)context dst:(SharedSkikoBitmap *)dst __attribute__((swift_name("readPixels(context:dst:)")));
- (BOOL)readPixelsContext:(SharedSkikoDirectContext *)context dst:(SharedSkikoBitmap *)dst srcX:(int32_t)srcX srcY:(int32_t)srcY __attribute__((swift_name("readPixels(context:dst:srcX:srcY:)")));
- (BOOL)readPixelsContext:(SharedSkikoDirectContext * _Nullable)context dst:(SharedSkikoBitmap *)dst srcX:(int32_t)srcX srcY:(int32_t)srcY cache:(BOOL)cache __attribute__((swift_name("readPixels(context:dst:srcX:srcY:cache:)")));
- (BOOL)readPixelsDst:(SharedSkikoPixmap *)dst srcX:(int32_t)srcX srcY:(int32_t)srcY cache:(BOOL)cache __attribute__((swift_name("readPixels(dst:srcX:srcY:cache:)")));
- (BOOL)scalePixelsDst:(SharedSkikoPixmap *)dst samplingMode:(id<SharedSkikoSamplingMode>)samplingMode cache:(BOOL)cache __attribute__((swift_name("scalePixels(dst:samplingMode:cache:)")));
@property (readonly) SharedSkikoImageInfo *imageInfo __attribute__((swift_name("imageInfo")));
@end

__attribute__((swift_name("SkikoRect")))
@interface SharedSkikoRect : SharedBase
- (instancetype)initWithLeft:(float)left top:(float)top right:(float)right bottom:(float)bottom __attribute__((swift_name("init(left:top:right:bottom:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedSkikoRectCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedSkikoRect *)inflateSpread:(float)spread __attribute__((swift_name("inflate(spread:)")));
- (SharedSkikoRect * _Nullable)intersectOther:(SharedSkikoRect *)other __attribute__((swift_name("intersect(other:)")));
- (SharedSkikoRect *)offsetDx:(float)dx dy:(float)dy __attribute__((swift_name("offset(dx:dy:)")));
- (SharedSkikoRect *)offsetVec:(SharedSkikoPoint *)vec __attribute__((swift_name("offset(vec:)")));
- (SharedSkikoRect *)scaleScale:(float)scale __attribute__((swift_name("scale(scale:)")));
- (SharedSkikoRect *)scaleSx:(float)sx sy:(float)sy __attribute__((swift_name("scale(sx:sy:)")));
- (SharedSkikoIRect *)toIRect __attribute__((swift_name("toIRect()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float bottom __attribute__((swift_name("bottom")));
@property (readonly) float height_ __attribute__((swift_name("height_")));
@property (readonly, getter=isEmpty_) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) float left __attribute__((swift_name("left")));
@property (readonly) float right __attribute__((swift_name("right")));
@property (readonly) float top __attribute__((swift_name("top")));
@property (readonly) float width_ __attribute__((swift_name("width_")));
@end

__attribute__((swift_name("SkikoSamplingMode")))
@protocol SharedSkikoSamplingMode
@required
- (int64_t)_pack __attribute__((swift_name("_pack()"))) __attribute__((deprecated("Long can't be used because Long is an object in kotlin/js. Consider using _packedInt1 and _packedInt2")));
- (int32_t)_packedInt1 __attribute__((swift_name("_packedInt1()")));
- (int32_t)_packedInt2 __attribute__((swift_name("_packedInt2()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoMatrix33")))
@interface SharedSkikoMatrix33 : SharedBase
- (instancetype)initWithMat:(SharedKotlinFloatArray *)mat __attribute__((swift_name("init(mat:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedSkikoMatrix33Companion *companion __attribute__((swift_name("companion")));
- (SharedSkikoMatrix44 *)asMatrix44 __attribute__((swift_name("asMatrix44()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedSkikoMatrix33 *)makeConcatOther:(SharedSkikoMatrix33 *)other __attribute__((swift_name("makeConcat(other:)")));
- (SharedSkikoMatrix33 *)makePreScaleSx:(float)sx sy:(float)sy __attribute__((swift_name("makePreScale(sx:sy:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKotlinFloatArray *mat __attribute__((swift_name("mat")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoRuntimeShaderBuilder")))
@interface SharedSkikoRuntimeShaderBuilder : SharedSkikoManaged
- (instancetype)initWithEffect:(SharedSkikoRuntimeEffect *)effect __attribute__((swift_name("init(effect:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedSkikoRuntimeShaderBuilderCompanion *companion __attribute__((swift_name("companion")));
- (void)childName:(NSString *)name colorFilter:(SharedSkikoColorFilter *)colorFilter __attribute__((swift_name("child(name:colorFilter:)")));
- (void)childName:(NSString *)name shader:(SharedSkikoShader *)shader __attribute__((swift_name("child(name:shader:)")));
- (SharedSkikoShader *)makeShaderLocalMatrix:(SharedSkikoMatrix33 * _Nullable)localMatrix __attribute__((swift_name("makeShader(localMatrix:)")));
- (void)uniformName:(NSString *)name value:(float)value __attribute__((swift_name("uniform(name:value:)")));
- (void)uniformName:(NSString *)name value1:(float)value1 value2:(float)value2 __attribute__((swift_name("uniform(name:value1:value2:)")));
- (void)uniformName:(NSString *)name value1:(float)value1 value2:(float)value2 value3:(float)value3 __attribute__((swift_name("uniform(name:value1:value2:value3:)")));
- (void)uniformName:(NSString *)name value1:(float)value1 value2:(float)value2 value3:(float)value3 value4:(float)value4 __attribute__((swift_name("uniform(name:value1:value2:value3:value4:)")));
- (void)uniformName:(NSString *)name value_:(int32_t)value __attribute__((swift_name("uniform(name:value_:)")));
- (void)uniformName:(NSString *)name value1:(int32_t)value1 value2_:(int32_t)value2 __attribute__((swift_name("uniform(name:value1:value2_:)")));
- (void)uniformName:(NSString *)name value1:(int32_t)value1 value2:(int32_t)value2 value3_:(int32_t)value3 __attribute__((swift_name("uniform(name:value1:value2:value3_:)")));
- (void)uniformName:(NSString *)name value1:(int32_t)value1 value2:(int32_t)value2 value3:(int32_t)value3 value4_:(int32_t)value4 __attribute__((swift_name("uniform(name:value1:value2:value3:value4_:)")));
- (void)uniformName:(NSString *)name value__:(SharedSkikoMatrix22 *)value __attribute__((swift_name("uniform(name:value__:)")));
- (void)uniformName:(NSString *)name value___:(SharedSkikoMatrix33 *)value __attribute__((swift_name("uniform(name:value___:)")));
- (void)uniformName:(NSString *)name value____:(SharedSkikoMatrix44 *)value __attribute__((swift_name("uniform(name:value____:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoFilterBlurMode")))
@interface SharedSkikoFilterBlurMode : SharedKotlinEnum<SharedSkikoFilterBlurMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedSkikoFilterBlurMode *normal __attribute__((swift_name("normal")));
@property (class, readonly) SharedSkikoFilterBlurMode *solid __attribute__((swift_name("solid")));
@property (class, readonly) SharedSkikoFilterBlurMode *outer __attribute__((swift_name("outer")));
@property (class, readonly) SharedSkikoFilterBlurMode *inner __attribute__((swift_name("inner")));
+ (SharedKotlinArray<SharedSkikoFilterBlurMode *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPath")))
@interface SharedSkikoPath : SharedSkikoManaged <SharedKotlinIterable>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedSkikoPathCompanion *companion __attribute__((swift_name("companion")));
- (SharedSkikoPath *)addArcOval:(SharedSkikoRect *)oval startAngle:(float)startAngle sweepAngle:(float)sweepAngle __attribute__((swift_name("addArc(oval:startAngle:sweepAngle:)")));
- (SharedSkikoPath *)addCircleX:(float)x y:(float)y radius:(float)radius dir:(SharedSkikoPathDirection *)dir __attribute__((swift_name("addCircle(x:y:radius:dir:)")));
- (SharedSkikoPath *)addOvalOval:(SharedSkikoRect *)oval dir:(SharedSkikoPathDirection *)dir start:(int32_t)start __attribute__((swift_name("addOval(oval:dir:start:)")));
- (SharedSkikoPath *)addPathSrc:(SharedSkikoPath * _Nullable)src extend:(BOOL)extend __attribute__((swift_name("addPath(src:extend:)")));
- (SharedSkikoPath *)addPathSrc:(SharedSkikoPath * _Nullable)src dx:(float)dx dy:(float)dy extend:(BOOL)extend __attribute__((swift_name("addPath(src:dx:dy:extend:)")));
- (SharedSkikoPath *)addPathSrc:(SharedSkikoPath * _Nullable)src matrix:(SharedSkikoMatrix33 *)matrix extend:(BOOL)extend __attribute__((swift_name("addPath(src:matrix:extend:)")));
- (SharedSkikoPath *)addPolyPts:(SharedKotlinArray<SharedSkikoPoint *> *)pts close:(BOOL)close __attribute__((swift_name("addPoly(pts:close:)")));
- (SharedSkikoPath *)addPolyPts:(SharedKotlinFloatArray *)pts close_:(BOOL)close __attribute__((swift_name("addPoly(pts:close_:)")));
- (SharedSkikoPath *)addRRectRrect:(SharedSkikoRRect *)rrect dir:(SharedSkikoPathDirection *)dir start:(int32_t)start __attribute__((swift_name("addRRect(rrect:dir:start:)")));
- (SharedSkikoPath *)addRectRect:(SharedSkikoRect *)rect dir:(SharedSkikoPathDirection *)dir start:(int32_t)start __attribute__((swift_name("addRect(rect:dir:start:)")));
- (SharedSkikoPath *)arcToOval:(SharedSkikoRect *)oval startAngle:(float)startAngle sweepAngle:(float)sweepAngle forceMoveTo:(BOOL)forceMoveTo __attribute__((swift_name("arcTo(oval:startAngle:sweepAngle:forceMoveTo:)")));
- (SharedSkikoPath *)closePath __attribute__((swift_name("closePath()")));
- (SharedSkikoRect *)computeTightBounds __attribute__((swift_name("computeTightBounds()")));
- (SharedSkikoPath *)conicToX1:(float)x1 y1:(float)y1 x2:(float)x2 y2:(float)y2 w:(float)w __attribute__((swift_name("conicTo(x1:y1:x2:y2:w:)")));
- (SharedSkikoPath *)conicToP1:(SharedSkikoPoint *)p1 p2:(SharedSkikoPoint *)p2 w:(float)w __attribute__((swift_name("conicTo(p1:p2:w:)")));
- (BOOL)conservativelyContainsRectRect:(SharedSkikoRect *)rect __attribute__((swift_name("conservativelyContainsRect(rect:)")));
- (BOOL)containsX:(float)x y:(float)y __attribute__((swift_name("contains(x:y:)")));
- (BOOL)containsP:(SharedSkikoPoint *)p __attribute__((swift_name("contains(p:)")));
- (SharedSkikoPath *)cubicToX1:(float)x1 y1:(float)y1 x2:(float)x2 y2:(float)y2 x3:(float)x3 y3:(float)y3 __attribute__((swift_name("cubicTo(x1:y1:x2:y2:x3:y3:)")));
- (SharedSkikoPath *)cubicToP1:(SharedSkikoPoint *)p1 p2:(SharedSkikoPoint *)p2 p3:(SharedSkikoPoint *)p3 __attribute__((swift_name("cubicTo(p1:p2:p3:)")));
- (SharedSkikoPath *)dump __attribute__((swift_name("dump()")));
- (SharedSkikoPath *)dumpHex __attribute__((swift_name("dumpHex()")));
- (SharedSkikoPath *)ellipticalArcToRx:(float)rx ry:(float)ry xAxisRotate:(float)xAxisRotate arc:(SharedSkikoPathEllipseArc *)arc direction:(SharedSkikoPathDirection *)direction x:(float)x y:(float)y __attribute__((swift_name("ellipticalArcTo(rx:ry:xAxisRotate:arc:direction:x:y:)")));
- (SharedSkikoPath *)ellipticalArcToR:(SharedSkikoPoint *)r xAxisRotate:(float)xAxisRotate arc:(SharedSkikoPathEllipseArc *)arc direction:(SharedSkikoPathDirection *)direction xy:(SharedSkikoPoint *)xy __attribute__((swift_name("ellipticalArcTo(r:xAxisRotate:arc:direction:xy:)")));
- (SharedSkikoPoint *)getPointIndex:(int32_t)index __attribute__((swift_name("getPoint(index:)")));
- (int32_t)getPointsPoints:(SharedKotlinArray<SharedSkikoPoint *> * _Nullable)points max:(int32_t)max __attribute__((swift_name("getPoints(points:max:)")));
- (int32_t)getVerbsVerbs:(SharedKotlinArray<SharedSkikoPathVerb *> * _Nullable)verbs max:(int32_t)max __attribute__((swift_name("getVerbs(verbs:max:)")));
- (SharedSkikoPath *)incReserveExtraPtCount:(int32_t)extraPtCount __attribute__((swift_name("incReserve(extraPtCount:)")));
- (BOOL)isInterpolatableCompare:(SharedSkikoPath * _Nullable)compare __attribute__((swift_name("isInterpolatable(compare:)")));
- (SharedSkikoPathSegmentIterator *)iterator __attribute__((swift_name("iterator()")));
- (SharedSkikoPathSegmentIterator *)iteratorForceClose:(BOOL)forceClose __attribute__((swift_name("iterator(forceClose:)")));
- (SharedSkikoPath *)lineToX:(float)x y:(float)y __attribute__((swift_name("lineTo(x:y:)")));
- (SharedSkikoPath *)lineToP:(SharedSkikoPoint *)p __attribute__((swift_name("lineTo(p:)")));
- (SharedSkikoPath *)makeLerpEnding:(SharedSkikoPath * _Nullable)ending weight:(float)weight __attribute__((swift_name("makeLerp(ending:weight:)")));
- (SharedSkikoPath *)moveToX:(float)x y:(float)y __attribute__((swift_name("moveTo(x:y:)")));
- (SharedSkikoPath *)moveToP:(SharedSkikoPoint *)p __attribute__((swift_name("moveTo(p:)")));
- (SharedSkikoPath *)offsetDx:(float)dx dy:(float)dy dst:(SharedSkikoPath * _Nullable)dst __attribute__((swift_name("offset(dx:dy:dst:)")));
- (SharedSkikoPath *)quadToX1:(float)x1 y1:(float)y1 x2:(float)x2 y2:(float)y2 __attribute__((swift_name("quadTo(x1:y1:x2:y2:)")));
- (SharedSkikoPath *)quadToP1:(SharedSkikoPoint *)p1 p2:(SharedSkikoPoint *)p2 __attribute__((swift_name("quadTo(p1:p2:)")));
- (SharedSkikoPath *)rConicToDx1:(float)dx1 dy1:(float)dy1 dx2:(float)dx2 dy2:(float)dy2 w:(float)w __attribute__((swift_name("rConicTo(dx1:dy1:dx2:dy2:w:)")));
- (SharedSkikoPath *)rCubicToDx1:(float)dx1 dy1:(float)dy1 dx2:(float)dx2 dy2:(float)dy2 dx3:(float)dx3 dy3:(float)dy3 __attribute__((swift_name("rCubicTo(dx1:dy1:dx2:dy2:dx3:dy3:)")));
- (SharedSkikoPath *)rEllipticalArcToRx:(float)rx ry:(float)ry xAxisRotate:(float)xAxisRotate arc:(SharedSkikoPathEllipseArc *)arc direction:(SharedSkikoPathDirection *)direction dx:(float)dx dy:(float)dy __attribute__((swift_name("rEllipticalArcTo(rx:ry:xAxisRotate:arc:direction:dx:dy:)")));
- (SharedSkikoPath *)rLineToDx:(float)dx dy:(float)dy __attribute__((swift_name("rLineTo(dx:dy:)")));
- (SharedSkikoPath *)rMoveToDx:(float)dx dy:(float)dy __attribute__((swift_name("rMoveTo(dx:dy:)")));
- (SharedSkikoPath *)rQuadToDx1:(float)dx1 dy1:(float)dy1 dx2:(float)dx2 dy2:(float)dy2 __attribute__((swift_name("rQuadTo(dx1:dy1:dx2:dy2:)")));
- (SharedSkikoPath *)reset __attribute__((swift_name("reset()")));
- (SharedSkikoPath *)reverseAddPathSrc:(SharedSkikoPath * _Nullable)src __attribute__((swift_name("reverseAddPath(src:)")));
- (SharedSkikoPath *)rewind __attribute__((swift_name("rewind()")));
- (SharedKotlinByteArray *)serializeToBytes __attribute__((swift_name("serializeToBytes()")));
- (SharedSkikoPath *)setLastPtX:(float)x y:(float)y __attribute__((swift_name("setLastPt(x:y:)")));
- (SharedSkikoPath *)setVolatileIsVolatile:(BOOL)isVolatile __attribute__((swift_name("setVolatile(isVolatile:)")));
- (SharedSkikoPath *)swapOther:(SharedSkikoPath * _Nullable)other __attribute__((swift_name("swap(other:)")));
- (SharedSkikoPath *)tangentArcToX1:(float)x1 y1:(float)y1 x2:(float)x2 y2:(float)y2 radius:(float)radius __attribute__((swift_name("tangentArcTo(x1:y1:x2:y2:radius:)")));
- (SharedSkikoPath *)tangentArcToP1:(SharedSkikoPoint *)p1 p2:(SharedSkikoPoint *)p2 radius:(float)radius __attribute__((swift_name("tangentArcTo(p1:p2:radius:)")));
- (SharedSkikoPath *)transformMatrix:(SharedSkikoMatrix33 *)matrix applyPerspectiveClip:(BOOL)applyPerspectiveClip __attribute__((swift_name("transform(matrix:applyPerspectiveClip:)")));
- (SharedSkikoPath *)transformMatrix:(SharedSkikoMatrix33 *)matrix dst:(SharedSkikoPath * _Nullable)dst applyPerspectiveClip:(BOOL)applyPerspectiveClip __attribute__((swift_name("transform(matrix:dst:applyPerspectiveClip:)")));
- (SharedSkikoPath *)updateBoundsCache __attribute__((swift_name("updateBoundsCache()")));
@property (readonly) void * _Nullable approximateBytesUsed __attribute__((swift_name("approximateBytesUsed")));
@property (readonly) SharedKotlinArray<SharedSkikoPoint *> * _Nullable asLine __attribute__((swift_name("asLine")));
@property (readonly) SharedSkikoRect *bounds __attribute__((swift_name("bounds")));
@property SharedSkikoPathFillMode *fillMode __attribute__((swift_name("fillMode")));
@property (readonly) int32_t generationId __attribute__((swift_name("generationId")));
@property (readonly) BOOL isConvex __attribute__((swift_name("isConvex")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) BOOL isFinite __attribute__((swift_name("isFinite")));
@property (readonly) BOOL isLastContourClosed __attribute__((swift_name("isLastContourClosed")));
@property (readonly) SharedSkikoRect * _Nullable isOval __attribute__((swift_name("isOval")));
@property (readonly) SharedSkikoRRect * _Nullable isRRect __attribute__((swift_name("isRRect")));
@property (readonly) SharedSkikoRect * _Nullable isRect __attribute__((swift_name("isRect")));
@property (readonly) BOOL isValid __attribute__((swift_name("isValid")));
@property BOOL isVolatile __attribute__((swift_name("isVolatile")));
@property SharedSkikoPoint *lastPt __attribute__((swift_name("lastPt")));
@property (readonly) SharedKotlinArray<SharedSkikoPoint *> *points __attribute__((swift_name("points")));
@property (readonly) int32_t pointsCount __attribute__((swift_name("pointsCount")));
@property (readonly) int32_t segmentMasks __attribute__((swift_name("segmentMasks")));
@property (readonly) SharedKotlinArray<SharedSkikoPathVerb *> *verbs __attribute__((swift_name("verbs")));
@property (readonly) int32_t verbsCount __attribute__((swift_name("verbsCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPathEffect.Style")))
@interface SharedSkikoPathEffectStyle : SharedKotlinEnum<SharedSkikoPathEffectStyle *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedSkikoPathEffectStyle *translate __attribute__((swift_name("translate")));
@property (class, readonly) SharedSkikoPathEffectStyle *rotate __attribute__((swift_name("rotate")));
@property (class, readonly) SharedSkikoPathEffectStyle *morph __attribute__((swift_name("morph")));
+ (SharedKotlinArray<SharedSkikoPathEffectStyle *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoISize.Companion")))
@interface SharedSkikoISizeCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSkikoISizeCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (SharedSkikoISize *)makeW:(int32_t)w h:(int32_t)h __attribute__((swift_name("make(w:h:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (SharedSkikoISize *)makeEmpty __attribute__((swift_name("makeEmpty()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoGradientStyle.Companion")))
@interface SharedSkikoGradientStyleCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSkikoGradientStyleCompanion *shared __attribute__((swift_name("shared")));
@property SharedSkikoGradientStyle *DEFAULT __attribute__((swift_name("DEFAULT")));
@end

__attribute__((swift_name("KotlinIntIterator")))
@interface SharedKotlinIntIterator : SharedBase <SharedKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedInt *)next __attribute__((swift_name("next()")));
- (int32_t)nextInt __attribute__((swift_name("nextInt()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPoint.Companion")))
@interface SharedSkikoPointCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSkikoPointCompanion *shared __attribute__((swift_name("shared")));
- (SharedKotlinFloatArray * _Nullable)flattenArrayPts:(SharedKotlinArray<SharedSkikoPoint *> * _Nullable)pts __attribute__((swift_name("flattenArray(pts:)")));
- (SharedKotlinArray<SharedSkikoPoint *> * _Nullable)fromArrayPts:(SharedKotlinFloatArray * _Nullable)pts __attribute__((swift_name("fromArray(pts:)")));
@property (readonly) SharedSkikoPoint *ZERO __attribute__((swift_name("ZERO")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface SharedKotlinByteIterator : SharedBase <SharedKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoRegion.Companion")))
@interface SharedSkikoRegionCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSkikoRegionCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoRegion.Op")))
@interface SharedSkikoRegionOp : SharedKotlinEnum<SharedSkikoRegionOp *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedSkikoRegionOpCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SharedSkikoRegionOp *difference __attribute__((swift_name("difference")));
@property (class, readonly) SharedSkikoRegionOp *intersect __attribute__((swift_name("intersect")));
@property (class, readonly) SharedSkikoRegionOp *union_ __attribute__((swift_name("union_")));
@property (class, readonly) SharedSkikoRegionOp *xor_ __attribute__((swift_name("xor_")));
@property (class, readonly) SharedSkikoRegionOp *reverseDifference __attribute__((swift_name("reverseDifference")));
@property (class, readonly) SharedSkikoRegionOp *replace __attribute__((swift_name("replace")));
+ (SharedKotlinArray<SharedSkikoRegionOp *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoIRect.Companion")))
@interface SharedSkikoIRectCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSkikoIRectCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (SharedSkikoIRect *)makeLTRBL:(int32_t)l t:(int32_t)t r:(int32_t)r b:(int32_t)b __attribute__((swift_name("makeLTRB(l:t:r:b:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (SharedSkikoIRect *)makeWHW:(int32_t)w h:(int32_t)h __attribute__((swift_name("makeWH(w:h:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (SharedSkikoIRect *)makeXYWHL:(int32_t)l t:(int32_t)t w:(int32_t)w h:(int32_t)h __attribute__((swift_name("makeXYWH(l:t:w:h:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoIPoint")))
@interface SharedSkikoIPoint : SharedBase
- (instancetype)initWithX:(int32_t)x y:(int32_t)y __attribute__((swift_name("init(x:y:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedSkikoIPointCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedSkikoIPoint *)offsetDx:(int32_t)dx dy:(int32_t)dy __attribute__((swift_name("offset(dx:dy:)")));
- (SharedSkikoIPoint *)offsetVec:(SharedSkikoIPoint *)vec __attribute__((swift_name("offset(vec:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) int32_t x __attribute__((swift_name("x")));
@property (readonly) int32_t y __attribute__((swift_name("y")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoColorAlphaType")))
@interface SharedSkikoColorAlphaType : SharedKotlinEnum<SharedSkikoColorAlphaType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedSkikoColorAlphaType *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) SharedSkikoColorAlphaType *opaque __attribute__((swift_name("opaque")));
@property (class, readonly) SharedSkikoColorAlphaType *premul __attribute__((swift_name("premul")));
@property (class, readonly) SharedSkikoColorAlphaType *unpremul __attribute__((swift_name("unpremul")));
+ (SharedKotlinArray<SharedSkikoColorAlphaType *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoColorInfo")))
@interface SharedSkikoColorInfo : SharedBase
- (instancetype)initWithColorType:(SharedSkikoColorType *)colorType alphaType:(SharedSkikoColorAlphaType *)alphaType colorSpace:(SharedSkikoColorSpace * _Nullable)colorSpace __attribute__((swift_name("init(colorType:alphaType:colorSpace:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedSkikoColorInfoCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (SharedSkikoColorInfo *)withAlphaType_alphaType:(SharedSkikoColorAlphaType *)_alphaType __attribute__((swift_name("withAlphaType(_alphaType:)")));
- (SharedSkikoColorInfo *)withColorSpace_colorSpace:(SharedSkikoColorSpace * _Nullable)_colorSpace __attribute__((swift_name("withColorSpace(_colorSpace:)")));
- (SharedSkikoColorInfo *)withColorType_colorType:(SharedSkikoColorType *)_colorType __attribute__((swift_name("withColorType(_colorType:)")));
@property (readonly) SharedSkikoColorAlphaType *alphaType __attribute__((swift_name("alphaType")));
@property (readonly) int32_t bytesPerPixel __attribute__((swift_name("bytesPerPixel")));
@property (readonly) SharedSkikoColorSpace * _Nullable colorSpace __attribute__((swift_name("colorSpace")));
@property (readonly) SharedSkikoColorType *colorType __attribute__((swift_name("colorType")));
@property (readonly) BOOL isGammaCloseToSRGB __attribute__((swift_name("isGammaCloseToSRGB")));
@property (readonly) BOOL isOpaque __attribute__((swift_name("isOpaque")));
@property (readonly) int32_t shiftPerPixel __attribute__((swift_name("shiftPerPixel")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoColorType")))
@interface SharedSkikoColorType : SharedKotlinEnum<SharedSkikoColorType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedSkikoColorTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SharedSkikoColorType *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) SharedSkikoColorType *alpha8 __attribute__((swift_name("alpha8")));
@property (class, readonly) SharedSkikoColorType *rgb565 __attribute__((swift_name("rgb565")));
@property (class, readonly) SharedSkikoColorType *argb4444 __attribute__((swift_name("argb4444")));
@property (class, readonly) SharedSkikoColorType *rgba8888 __attribute__((swift_name("rgba8888")));
@property (class, readonly) SharedSkikoColorType *rgb888x __attribute__((swift_name("rgb888x")));
@property (class, readonly) SharedSkikoColorType *bgra8888 __attribute__((swift_name("bgra8888")));
@property (class, readonly) SharedSkikoColorType *rgba1010102 __attribute__((swift_name("rgba1010102")));
@property (class, readonly) SharedSkikoColorType *bgra1010102 __attribute__((swift_name("bgra1010102")));
@property (class, readonly) SharedSkikoColorType *rgb101010x __attribute__((swift_name("rgb101010x")));
@property (class, readonly) SharedSkikoColorType *bgr101010x __attribute__((swift_name("bgr101010x")));
@property (class, readonly) SharedSkikoColorType *gray8 __attribute__((swift_name("gray8")));
@property (class, readonly) SharedSkikoColorType *rgbaF16norm __attribute__((swift_name("rgbaF16norm")));
@property (class, readonly) SharedSkikoColorType *rgbaF16 __attribute__((swift_name("rgbaF16")));
@property (class, readonly) SharedSkikoColorType *rgbaF32 __attribute__((swift_name("rgbaF32")));
@property (class, readonly) SharedSkikoColorType *r8g8Unorm __attribute__((swift_name("r8g8Unorm")));
@property (class, readonly) SharedSkikoColorType *a16Float __attribute__((swift_name("a16Float")));
@property (class, readonly) SharedSkikoColorType *r16g16Float __attribute__((swift_name("r16g16Float")));
@property (class, readonly) SharedSkikoColorType *a16Unorm __attribute__((swift_name("a16Unorm")));
@property (class, readonly) SharedSkikoColorType *r16g16Unorm __attribute__((swift_name("r16g16Unorm")));
@property (class, readonly) SharedSkikoColorType *r16g16b16a16Unorm __attribute__((swift_name("r16g16b16a16Unorm")));
+ (SharedKotlinArray<SharedSkikoColorType *> *)values __attribute__((swift_name("values()")));
- (int64_t)computeOffsetX:(int32_t)x y:(int32_t)y rowBytes:(int64_t)rowBytes __attribute__((swift_name("computeOffset(x:y:rowBytes:)")));
- (float)getAColor:(int8_t)color __attribute__((swift_name("getA(color:)")));
- (float)getAColor_:(int32_t)color __attribute__((swift_name("getA(color_:)")));
- (float)getAColor__:(int16_t)color __attribute__((swift_name("getA(color__:)")));
- (float)getBColor:(int8_t)color __attribute__((swift_name("getB(color:)")));
- (float)getBColor_:(int32_t)color __attribute__((swift_name("getB(color_:)")));
- (float)getBColor__:(int16_t)color __attribute__((swift_name("getB(color__:)")));
- (float)getGColor:(int8_t)color __attribute__((swift_name("getG(color:)")));
- (float)getGColor_:(int32_t)color __attribute__((swift_name("getG(color_:)")));
- (float)getGColor__:(int16_t)color __attribute__((swift_name("getG(color__:)")));
- (float)getRColor:(int8_t)color __attribute__((swift_name("getR(color:)")));
- (float)getRColor_:(int32_t)color __attribute__((swift_name("getR(color_:)")));
- (float)getRColor__:(int16_t)color __attribute__((swift_name("getR(color__:)")));
- (SharedSkikoColorAlphaType * _Nullable)validateAlphaTypeAlphaType:(SharedSkikoColorAlphaType *)alphaType __attribute__((swift_name("validateAlphaType(alphaType:)")));
@property (readonly) int32_t bytesPerPixel __attribute__((swift_name("bytesPerPixel")));
@property (readonly) BOOL isAlwaysOpaque __attribute__((swift_name("isAlwaysOpaque")));
@property (readonly) int32_t shiftPerPixel __attribute__((swift_name("shiftPerPixel")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoImageInfo")))
@interface SharedSkikoImageInfo : SharedBase
- (instancetype)initWithWidth:(int32_t)width height:(int32_t)height colorType:(SharedSkikoColorType *)colorType alphaType:(SharedSkikoColorAlphaType *)alphaType __attribute__((swift_name("init(width:height:colorType:alphaType:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithWidth:(int32_t)width height:(int32_t)height colorType:(SharedSkikoColorType *)colorType alphaType:(SharedSkikoColorAlphaType *)alphaType colorSpace:(SharedSkikoColorSpace * _Nullable)colorSpace __attribute__((swift_name("init(width:height:colorType:alphaType:colorSpace:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithColorInfo:(SharedSkikoColorInfo *)colorInfo width:(int32_t)width height:(int32_t)height __attribute__((swift_name("init(colorInfo:width:height:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedSkikoImageInfoCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)computeByteSizeRowBytes:(int32_t)rowBytes __attribute__((swift_name("computeByteSize(rowBytes:)")));
- (int32_t)computeMinByteSize __attribute__((swift_name("computeMinByteSize()")));
- (int64_t)computeOffsetX:(int32_t)x y:(int32_t)y rowBytes:(int64_t)rowBytes __attribute__((swift_name("computeOffset(x:y:rowBytes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isRowBytesValidRowBytes:(int64_t)rowBytes __attribute__((swift_name("isRowBytesValid(rowBytes:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (SharedSkikoImageInfo *)withColorAlphaTypeAlphaType:(SharedSkikoColorAlphaType *)alphaType __attribute__((swift_name("withColorAlphaType(alphaType:)")));
- (SharedSkikoImageInfo *)withColorInfo_colorInfo:(SharedSkikoColorInfo *)_colorInfo __attribute__((swift_name("withColorInfo(_colorInfo:)")));
- (SharedSkikoImageInfo *)withColorSpaceColorSpace:(SharedSkikoColorSpace *)colorSpace __attribute__((swift_name("withColorSpace(colorSpace:)")));
- (SharedSkikoImageInfo *)withColorTypeColorType:(SharedSkikoColorType *)colorType __attribute__((swift_name("withColorType(colorType:)")));
- (SharedSkikoImageInfo *)withHeight_height:(int32_t)_height __attribute__((swift_name("withHeight(_height:)")));
- (SharedSkikoImageInfo *)withWidth_width:(int32_t)_width __attribute__((swift_name("withWidth(_width:)")));
- (SharedSkikoImageInfo *)withWidthHeightWidth:(int32_t)width height:(int32_t)height __attribute__((swift_name("withWidthHeight(width:height:)")));
@property (readonly) SharedSkikoIRect *bounds __attribute__((swift_name("bounds")));
@property (readonly) int32_t bytesPerPixel __attribute__((swift_name("bytesPerPixel")));
@property (readonly) SharedSkikoColorAlphaType *colorAlphaType __attribute__((swift_name("colorAlphaType")));
@property (readonly) SharedSkikoColorInfo *colorInfo __attribute__((swift_name("colorInfo")));
@property (readonly) SharedSkikoColorSpace * _Nullable colorSpace __attribute__((swift_name("colorSpace")));
@property (readonly) SharedSkikoColorType *colorType __attribute__((swift_name("colorType")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) BOOL isGammaCloseToSRGB __attribute__((swift_name("isGammaCloseToSRGB")));
@property (readonly) BOOL isOpaque __attribute__((swift_name("isOpaque")));
@property (readonly) int32_t minRowBytes __attribute__((swift_name("minRowBytes")));
@property (readonly) int32_t shiftPerPixel __attribute__((swift_name("shiftPerPixel")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoImage.Companion")))
@interface SharedSkikoImageCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSkikoImageCompanion *shared __attribute__((swift_name("shared")));
- (SharedSkikoImage *)makeFromBitmapBitmap:(SharedSkikoBitmap *)bitmap __attribute__((swift_name("makeFromBitmap(bitmap:)")));
- (SharedSkikoImage *)makeFromEncodedBytes:(SharedKotlinByteArray *)bytes __attribute__((swift_name("makeFromEncoded(bytes:)")));
- (SharedSkikoImage *)makeFromPixmapPixmap:(SharedSkikoPixmap *)pixmap __attribute__((swift_name("makeFromPixmap(pixmap:)")));
- (SharedSkikoImage *)makeRasterImageInfo:(SharedSkikoImageInfo *)imageInfo bytes:(SharedKotlinByteArray *)bytes rowBytes:(int32_t)rowBytes __attribute__((swift_name("makeRaster(imageInfo:bytes:rowBytes:)")));
- (SharedSkikoImage *)makeRasterImageInfo:(SharedSkikoImageInfo *)imageInfo data:(SharedSkikoData *)data rowBytes:(int32_t)rowBytes __attribute__((swift_name("makeRaster(imageInfo:data:rowBytes:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoData")))
@interface SharedSkikoData : SharedSkikoManaged
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedSkikoDataCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (SharedKotlinByteArray *)getBytesOffset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("getBytes(offset:length:)")));
- (SharedSkikoData *)makeCopy __attribute__((swift_name("makeCopy()")));
- (SharedSkikoData *)makeSubsetOffset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("makeSubset(offset:length:)")));
- (void * _Nullable)writableData __attribute__((swift_name("writableData()")));
@property (readonly) SharedKotlinByteArray *bytes __attribute__((swift_name("bytes")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoEncodedImageFormat")))
@interface SharedSkikoEncodedImageFormat : SharedKotlinEnum<SharedSkikoEncodedImageFormat *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedSkikoEncodedImageFormat *bmp __attribute__((swift_name("bmp")));
@property (class, readonly) SharedSkikoEncodedImageFormat *gif __attribute__((swift_name("gif")));
@property (class, readonly) SharedSkikoEncodedImageFormat *ico __attribute__((swift_name("ico")));
@property (class, readonly) SharedSkikoEncodedImageFormat *jpeg __attribute__((swift_name("jpeg")));
@property (class, readonly) SharedSkikoEncodedImageFormat *png __attribute__((swift_name("png")));
@property (class, readonly) SharedSkikoEncodedImageFormat *wbmp __attribute__((swift_name("wbmp")));
@property (class, readonly) SharedSkikoEncodedImageFormat *webp __attribute__((swift_name("webp")));
@property (class, readonly) SharedSkikoEncodedImageFormat *pkm __attribute__((swift_name("pkm")));
@property (class, readonly) SharedSkikoEncodedImageFormat *ktx __attribute__((swift_name("ktx")));
@property (class, readonly) SharedSkikoEncodedImageFormat *astc __attribute__((swift_name("astc")));
@property (class, readonly) SharedSkikoEncodedImageFormat *dng __attribute__((swift_name("dng")));
@property (class, readonly) SharedSkikoEncodedImageFormat *heif __attribute__((swift_name("heif")));
+ (SharedKotlinArray<SharedSkikoEncodedImageFormat *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPixmap")))
@interface SharedSkikoPixmap : SharedSkikoManaged
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedSkikoPixmapCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)computeByteSize __attribute__((swift_name("computeByteSize()")));
- (BOOL)computeIsOpaque __attribute__((swift_name("computeIsOpaque()")));
- (BOOL)eraseColor:(int32_t)color __attribute__((swift_name("erase(color:)")));
- (BOOL)eraseColor:(int32_t)color subset:(SharedSkikoIRect *)subset __attribute__((swift_name("erase(color:subset:)")));
- (BOOL)extractSubsetSubset:(SharedSkikoPixmap *)subset area:(SharedSkikoIRect *)area __attribute__((swift_name("extractSubset(subset:area:)")));
- (BOOL)extractSubsetSubsetPtr:(void * _Nullable)subsetPtr area:(SharedSkikoIRect *)area __attribute__((swift_name("extractSubset(subsetPtr:area:)")));
- (void * _Nullable)getAddrX:(int32_t)x y:(int32_t)y __attribute__((swift_name("getAddr(x:y:)")));
- (float)getAlphaFX:(int32_t)x y:(int32_t)y __attribute__((swift_name("getAlphaF(x:y:)")));
- (int32_t)getColorX:(int32_t)x y:(int32_t)y __attribute__((swift_name("getColor(x:y:)")));
- (BOOL)readPixelsInfo:(SharedSkikoImageInfo *)info addr:(void * _Nullable)addr rowBytes:(int32_t)rowBytes __attribute__((swift_name("readPixels(info:addr:rowBytes:)")));
- (BOOL)readPixelsInfo:(SharedSkikoImageInfo *)info addr:(void * _Nullable)addr rowBytes:(int32_t)rowBytes srcX:(int32_t)srcX srcY:(int32_t)srcY __attribute__((swift_name("readPixels(info:addr:rowBytes:srcX:srcY:)")));
- (BOOL)readPixelsPixmap:(SharedSkikoPixmap *)pixmap srcX:(int32_t)srcX srcY:(int32_t)srcY __attribute__((swift_name("readPixels(pixmap:srcX:srcY:)")));
- (BOOL)readPixelsPixmap:(SharedSkikoPixmap * _Nullable)pixmap __attribute__((swift_name("readPixels(pixmap:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)resetInfo:(SharedSkikoImageInfo *)info buffer:(SharedSkikoData *)buffer rowBytes:(int32_t)rowBytes __attribute__((swift_name("reset(info:buffer:rowBytes:)")));
- (void)resetInfo:(SharedSkikoImageInfo *)info addr:(void * _Nullable)addr rowBytes:(int32_t)rowBytes underlyingMemoryOwner:(SharedSkikoManaged * _Nullable)underlyingMemoryOwner __attribute__((swift_name("reset(info:addr:rowBytes:underlyingMemoryOwner:)")));
- (BOOL)scalePixelsDstPixmap:(SharedSkikoPixmap * _Nullable)dstPixmap samplingMode:(id<SharedSkikoSamplingMode>)samplingMode __attribute__((swift_name("scalePixels(dstPixmap:samplingMode:)")));
- (void)setColorSpaceColorSpace:(SharedSkikoColorSpace * _Nullable)colorSpace __attribute__((swift_name("setColorSpace(colorSpace:)")));
@property (readonly) void * _Nullable addr __attribute__((swift_name("addr")));
@property (readonly) SharedSkikoData *buffer __attribute__((swift_name("buffer")));
@property (readonly) SharedSkikoImageInfo *info __attribute__((swift_name("info")));
@property (readonly) int32_t rowBytes __attribute__((swift_name("rowBytes")));
@property (readonly) int32_t rowBytesAsPixels __attribute__((swift_name("rowBytesAsPixels")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoBitmap")))
@interface SharedSkikoBitmap : SharedSkikoManaged <SharedSkikoIHasImageInfo>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedSkikoBitmapCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)doAllocN32PixelsWidth:(int32_t)width height:(int32_t)height opaque:(BOOL)opaque __attribute__((swift_name("doAllocN32Pixels(width:height:opaque:)")));
- (BOOL)doAllocPixels __attribute__((swift_name("doAllocPixels()")));
- (BOOL)doAllocPixelsImageInfo:(SharedSkikoImageInfo *)imageInfo __attribute__((swift_name("doAllocPixels(imageInfo:)")));
- (BOOL)doAllocPixelsInfo:(SharedSkikoImageInfo *)info rowBytes:(int32_t)rowBytes __attribute__((swift_name("doAllocPixels(info:rowBytes:)")));
- (BOOL)doAllocPixelsFlagsImageInfo:(SharedSkikoImageInfo *)imageInfo zeroPixels:(BOOL)zeroPixels __attribute__((swift_name("doAllocPixelsFlags(imageInfo:zeroPixels:)")));
- (int32_t)computeByteSize __attribute__((swift_name("computeByteSize()")));
- (BOOL)computeIsOpaque __attribute__((swift_name("computeIsOpaque()")));
- (BOOL)drawsNothing __attribute__((swift_name("drawsNothing()")));
- (SharedSkikoBitmap *)eraseColor:(int32_t)color __attribute__((swift_name("erase(color:)")));
- (SharedSkikoBitmap *)eraseColor:(int32_t)color area:(SharedSkikoIRect *)area __attribute__((swift_name("erase(color:area:)")));
- (BOOL)extractAlphaDst:(SharedSkikoBitmap *)dst __attribute__((swift_name("extractAlpha(dst:)")));
- (SharedSkikoIPoint * _Nullable)extractAlphaDst:(SharedSkikoBitmap *)dst paint:(SharedSkikoPaint * _Nullable)paint __attribute__((swift_name("extractAlpha(dst:paint:)")));
- (BOOL)extractSubsetDst:(SharedSkikoBitmap *)dst subset:(SharedSkikoIRect *)subset __attribute__((swift_name("extractSubset(dst:subset:)")));
- (float)getAlphafX:(int32_t)x y:(int32_t)y __attribute__((swift_name("getAlphaf(x:y:)")));
- (int32_t)getColorX:(int32_t)x y:(int32_t)y __attribute__((swift_name("getColor(x:y:)")));
- (BOOL)installPixelsPixels:(SharedKotlinByteArray * _Nullable)pixels __attribute__((swift_name("installPixels(pixels:)")));
- (BOOL)installPixelsInfo:(SharedSkikoImageInfo *)info pixels:(SharedKotlinByteArray * _Nullable)pixels rowBytes:(int32_t)rowBytes __attribute__((swift_name("installPixels(info:pixels:rowBytes:)")));
- (SharedSkikoBitmap *)makeClone __attribute__((swift_name("makeClone()")));
- (SharedSkikoShader *)makeShaderTmx:(SharedSkikoFilterTileMode *)tmx tmy:(SharedSkikoFilterTileMode *)tmy localMatrix:(SharedSkikoMatrix33 * _Nullable)localMatrix __attribute__((swift_name("makeShader(tmx:tmy:localMatrix:)")));
- (SharedSkikoShader *)makeShaderTmx:(SharedSkikoFilterTileMode *)tmx tmy:(SharedSkikoFilterTileMode *)tmy sampling:(id<SharedSkikoSamplingMode>)sampling localMatrix:(SharedSkikoMatrix33 * _Nullable)localMatrix __attribute__((swift_name("makeShader(tmx:tmy:sampling:localMatrix:)")));
- (SharedSkikoShader *)makeShaderLocalMatrix:(SharedSkikoMatrix33 * _Nullable)localMatrix __attribute__((swift_name("makeShader(localMatrix:)")));
- (SharedSkikoBitmap *)notifyPixelsChanged __attribute__((swift_name("notifyPixelsChanged()")));
- (SharedSkikoPixmap * _Nullable)peekPixels __attribute__((swift_name("peekPixels()")));
- (SharedKotlinByteArray * _Nullable)readPixelsDstInfo:(SharedSkikoImageInfo *)dstInfo dstRowBytes:(int32_t)dstRowBytes srcX:(int32_t)srcX srcY:(int32_t)srcY __attribute__((swift_name("readPixels(dstInfo:dstRowBytes:srcX:srcY:)")));
- (SharedSkikoBitmap *)reset __attribute__((swift_name("reset()")));
- (BOOL)setAlphaTypeAlphaType:(SharedSkikoColorAlphaType *)alphaType __attribute__((swift_name("setAlphaType(alphaType:)")));
- (BOOL)setImageInfoImageInfo:(SharedSkikoImageInfo *)imageInfo __attribute__((swift_name("setImageInfo(imageInfo:)")));
- (BOOL)setImageInfoImageInfo:(SharedSkikoImageInfo *)imageInfo rowBytes:(int32_t)rowBytes __attribute__((swift_name("setImageInfo(imageInfo:rowBytes:)")));
- (SharedSkikoBitmap *)setImmutable __attribute__((swift_name("setImmutable()")));
- (SharedSkikoBitmap *)setPixelRefPixelRef:(SharedSkikoPixelRef * _Nullable)pixelRef dx:(int32_t)dx dy:(int32_t)dy __attribute__((swift_name("setPixelRef(pixelRef:dx:dy:)")));
- (void)swapOther:(SharedSkikoBitmap *)other __attribute__((swift_name("swap(other:)")));
@property (readonly) SharedSkikoIRect *bounds __attribute__((swift_name("bounds")));
@property (readonly) int32_t generationId __attribute__((swift_name("generationId")));
@property (readonly) SharedSkikoImageInfo *imageInfo __attribute__((swift_name("imageInfo")));
@property (readonly) BOOL isImmutable __attribute__((swift_name("isImmutable")));
@property (readonly) BOOL isNull __attribute__((swift_name("isNull")));
@property (readonly) BOOL isReadyToDraw __attribute__((swift_name("isReadyToDraw")));
@property (readonly) SharedSkikoPixelRef * _Nullable pixelRef __attribute__((swift_name("pixelRef")));
@property (readonly) SharedSkikoIPoint *pixelRefOrigin __attribute__((swift_name("pixelRefOrigin")));
@property (readonly) int32_t rowBytes __attribute__((swift_name("rowBytes")));
@property (readonly) int32_t rowBytesAsPixels __attribute__((swift_name("rowBytesAsPixels")));
@property (readonly) SharedSkikoIRect *subset __attribute__((swift_name("subset")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoDirectContext")))
@interface SharedSkikoDirectContext : SharedSkikoRefCnt

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr allowClose:(BOOL)allowClose __attribute__((swift_name("init(ptr:allowClose:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedSkikoDirectContextCompanion *companion __attribute__((swift_name("companion")));
- (void)abandon __attribute__((swift_name("abandon()")));
- (SharedSkikoDirectContext *)flush __attribute__((swift_name("flush()")));
- (SharedSkikoDirectContext *)resetAll __attribute__((swift_name("resetAll()")));
- (SharedSkikoDirectContext *)resetGLStates:(SharedKotlinArray<SharedSkikoGLBackendState *> *)states __attribute__((swift_name("resetGL(states:)")));
- (SharedSkikoDirectContext *)resetGLAll __attribute__((swift_name("resetGLAll()")));
- (void)submitSyncCpu:(BOOL)syncCpu __attribute__((swift_name("submit(syncCpu:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoRect.Companion")))
@interface SharedSkikoRectCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSkikoRectCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (SharedSkikoRect *)makeLTRBL:(float)l t:(float)t r:(float)r b:(float)b __attribute__((swift_name("makeLTRB(l:t:r:b:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (SharedSkikoRect *)makeWHW:(float)w h:(float)h __attribute__((swift_name("makeWH(w:h:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (SharedSkikoRect *)makeWHSize:(SharedSkikoPoint *)size __attribute__((swift_name("makeWH(size:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (SharedSkikoRect *)makeXYWHL:(float)l t:(float)t w:(float)w h:(float)h __attribute__((swift_name("makeXYWH(l:t:w:h:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoMatrix33.Companion")))
@interface SharedSkikoMatrix33Companion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSkikoMatrix33Companion *shared __attribute__((swift_name("shared")));
- (SharedSkikoMatrix33 *)makeRotateDeg:(float)deg __attribute__((swift_name("makeRotate(deg:)")));
- (SharedSkikoMatrix33 *)makeRotateDeg:(float)deg pivotx:(float)pivotx pivoty:(float)pivoty __attribute__((swift_name("makeRotate(deg:pivotx:pivoty:)")));
- (SharedSkikoMatrix33 *)makeRotateDeg:(float)deg pivot:(SharedSkikoPoint *)pivot __attribute__((swift_name("makeRotate(deg:pivot:)")));
- (SharedSkikoMatrix33 *)makeScaleS:(float)s __attribute__((swift_name("makeScale(s:)")));
- (SharedSkikoMatrix33 *)makeScaleSx:(float)sx sy:(float)sy __attribute__((swift_name("makeScale(sx:sy:)")));
- (SharedSkikoMatrix33 *)makeSkewSx:(float)sx sy:(float)sy __attribute__((swift_name("makeSkew(sx:sy:)")));
- (SharedSkikoMatrix33 *)makeTranslateDx:(float)dx dy:(float)dy __attribute__((swift_name("makeTranslate(dx:dy:)")));
@property (readonly) SharedSkikoMatrix33 *IDENTITY __attribute__((swift_name("IDENTITY")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoMatrix44")))
@interface SharedSkikoMatrix44 : SharedBase
- (instancetype)initWithMat:(SharedKotlinFloatArray *)mat __attribute__((swift_name("init(mat:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedSkikoMatrix44Companion *companion __attribute__((swift_name("companion")));
- (SharedSkikoMatrix33 *)asMatrix33 __attribute__((swift_name("asMatrix33()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKotlinFloatArray *mat __attribute__((swift_name("mat")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoRuntimeEffect")))
@interface SharedSkikoRuntimeEffect : SharedSkikoRefCnt

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr allowClose:(BOOL)allowClose __attribute__((swift_name("init(ptr:allowClose:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedSkikoRuntimeEffectCompanion *companion __attribute__((swift_name("companion")));
- (SharedSkikoShader *)makeShaderUniforms:(SharedSkikoData * _Nullable)uniforms children:(SharedKotlinArray<SharedSkikoShader *> * _Nullable)children localMatrix:(SharedSkikoMatrix33 * _Nullable)localMatrix __attribute__((swift_name("makeShader(uniforms:children:localMatrix:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoRuntimeShaderBuilder.Companion")))
@interface SharedSkikoRuntimeShaderBuilderCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSkikoRuntimeShaderBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoMatrix22")))
@interface SharedSkikoMatrix22 : SharedBase
- (instancetype)initWithMat:(SharedKotlinFloatArray *)mat __attribute__((swift_name("init(mat:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedSkikoMatrix22Companion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKotlinFloatArray *mat __attribute__((swift_name("mat")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPath.Companion")))
@interface SharedSkikoPathCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSkikoPathCompanion *shared __attribute__((swift_name("shared")));
- (SharedKotlinArray<SharedSkikoPoint *> *)convertConicToQuadsP0:(SharedSkikoPoint *)p0 p1:(SharedSkikoPoint *)p1 p2:(SharedSkikoPoint *)p2 w:(float)w pow2:(int32_t)pow2 __attribute__((swift_name("convertConicToQuads(p0:p1:p2:w:pow2:)")));
- (BOOL)isCubicDegenerateP1:(SharedSkikoPoint *)p1 p2:(SharedSkikoPoint *)p2 p3:(SharedSkikoPoint *)p3 p4:(SharedSkikoPoint *)p4 exact:(BOOL)exact __attribute__((swift_name("isCubicDegenerate(p1:p2:p3:p4:exact:)")));
- (BOOL)isLineDegenerateP1:(SharedSkikoPoint *)p1 p2:(SharedSkikoPoint *)p2 exact:(BOOL)exact __attribute__((swift_name("isLineDegenerate(p1:p2:exact:)")));
- (BOOL)isQuadDegenerateP1:(SharedSkikoPoint *)p1 p2:(SharedSkikoPoint *)p2 p3:(SharedSkikoPoint *)p3 exact:(BOOL)exact __attribute__((swift_name("isQuadDegenerate(p1:p2:p3:exact:)")));
- (SharedSkikoPath * _Nullable)makeCombiningOne:(SharedSkikoPath *)one two:(SharedSkikoPath *)two op:(SharedSkikoPathOp *)op __attribute__((swift_name("makeCombining(one:two:op:)")));
- (SharedSkikoPath *)makeFromBytesData:(SharedKotlinByteArray *)data __attribute__((swift_name("makeFromBytes(data:)")));
- (SharedSkikoPath *)makeFromSVGStringSvg:(NSString *)svg __attribute__((swift_name("makeFromSVGString(svg:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPathDirection")))
@interface SharedSkikoPathDirection : SharedKotlinEnum<SharedSkikoPathDirection *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedSkikoPathDirection *clockwise __attribute__((swift_name("clockwise")));
@property (class, readonly) SharedSkikoPathDirection *counterClockwise __attribute__((swift_name("counterClockwise")));
+ (SharedKotlinArray<SharedSkikoPathDirection *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoRRect")))
@interface SharedSkikoRRect : SharedSkikoRect
- (instancetype)initWithLeft:(float)left top:(float)top right:(float)right bottom:(float)bottom __attribute__((swift_name("init(left:top:right:bottom:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedSkikoRRectCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedSkikoRect *)inflateSpread:(float)spread __attribute__((swift_name("inflate(spread:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKotlinFloatArray *radii __attribute__((swift_name("radii")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPathEllipseArc")))
@interface SharedSkikoPathEllipseArc : SharedKotlinEnum<SharedSkikoPathEllipseArc *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedSkikoPathEllipseArc *smaller __attribute__((swift_name("smaller")));
@property (class, readonly) SharedSkikoPathEllipseArc *larger __attribute__((swift_name("larger")));
+ (SharedKotlinArray<SharedSkikoPathEllipseArc *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPathVerb")))
@interface SharedSkikoPathVerb : SharedKotlinEnum<SharedSkikoPathVerb *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedSkikoPathVerb *move __attribute__((swift_name("move")));
@property (class, readonly) SharedSkikoPathVerb *line __attribute__((swift_name("line")));
@property (class, readonly) SharedSkikoPathVerb *quad __attribute__((swift_name("quad")));
@property (class, readonly) SharedSkikoPathVerb *conic __attribute__((swift_name("conic")));
@property (class, readonly) SharedSkikoPathVerb *cubic __attribute__((swift_name("cubic")));
@property (class, readonly) SharedSkikoPathVerb *close __attribute__((swift_name("close")));
@property (class, readonly) SharedSkikoPathVerb *done __attribute__((swift_name("done")));
+ (SharedKotlinArray<SharedSkikoPathVerb *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((swift_name("KotlinMutableIterator")))
@protocol SharedKotlinMutableIterator <SharedKotlinIterator>
@required
- (void)remove __attribute__((swift_name("remove()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPathSegmentIterator")))
@interface SharedSkikoPathSegmentIterator : SharedSkikoManaged <SharedKotlinMutableIterator>
- (instancetype)initWithPtr:(void * _Nullable)ptr finalizer:(void * _Nullable)finalizer managed:(BOOL)managed __attribute__((swift_name("init(ptr:finalizer:managed:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedSkikoPathSegmentIteratorCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (SharedSkikoPathSegment * _Nullable)next __attribute__((swift_name("next()")));
- (void)remove __attribute__((swift_name("remove()")));
@property SharedSkikoPathSegment * _Nullable _nextSegment __attribute__((swift_name("_nextSegment")));
@property (readonly) SharedSkikoPath * _Nullable _path __attribute__((swift_name("_path")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPathFillMode")))
@interface SharedSkikoPathFillMode : SharedKotlinEnum<SharedSkikoPathFillMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedSkikoPathFillMode *winding __attribute__((swift_name("winding")));
@property (class, readonly) SharedSkikoPathFillMode *evenOdd __attribute__((swift_name("evenOdd")));
@property (class, readonly) SharedSkikoPathFillMode *inverseWinding __attribute__((swift_name("inverseWinding")));
@property (class, readonly) SharedSkikoPathFillMode *inverseEvenOdd __attribute__((swift_name("inverseEvenOdd")));
+ (SharedKotlinArray<SharedSkikoPathFillMode *> *)values __attribute__((swift_name("values()")));
- (SharedSkikoPathFillMode *)inverse __attribute__((swift_name("inverse()")));
@property (readonly) BOOL isInverse __attribute__((swift_name("isInverse")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoRegion.OpCompanion")))
@interface SharedSkikoRegionOpCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSkikoRegionOpCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoIPoint.Companion")))
@interface SharedSkikoIPointCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSkikoIPointCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedSkikoIPoint *ZERO __attribute__((swift_name("ZERO")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoColorInfo.Companion")))
@interface SharedSkikoColorInfoCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSkikoColorInfoCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedSkikoColorInfo *DEFAULT __attribute__((swift_name("DEFAULT")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoColorType.Companion")))
@interface SharedSkikoColorTypeCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSkikoColorTypeCompanion *shared __attribute__((swift_name("shared")));
@property SharedSkikoColorType *N32 __attribute__((swift_name("N32")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoImageInfo.Companion")))
@interface SharedSkikoImageInfoCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSkikoImageInfoCompanion *shared __attribute__((swift_name("shared")));
- (SharedSkikoImageInfo *)createUsing_ptr:(void * _Nullable)_ptr _nGetImageInfo:(void (^)(id _Nullable, id _Nullable, id _Nullable))_nGetImageInfo __attribute__((swift_name("createUsing(_ptr:_nGetImageInfo:)")));
- (SharedSkikoImageInfo *)makeA8Width:(int32_t)width height:(int32_t)height __attribute__((swift_name("makeA8(width:height:)")));
- (SharedSkikoImageInfo *)makeN32Width:(int32_t)width height:(int32_t)height alphaType:(SharedSkikoColorAlphaType *)alphaType __attribute__((swift_name("makeN32(width:height:alphaType:)")));
- (SharedSkikoImageInfo *)makeN32Width:(int32_t)width height:(int32_t)height alphaType:(SharedSkikoColorAlphaType *)alphaType colorSpace:(SharedSkikoColorSpace * _Nullable)colorSpace __attribute__((swift_name("makeN32(width:height:alphaType:colorSpace:)")));
- (SharedSkikoImageInfo *)makeN32PremulWidth:(int32_t)width height:(int32_t)height __attribute__((swift_name("makeN32Premul(width:height:)")));
- (SharedSkikoImageInfo *)makeN32PremulWidth:(int32_t)width height:(int32_t)height colorSpace:(SharedSkikoColorSpace * _Nullable)colorSpace __attribute__((swift_name("makeN32Premul(width:height:colorSpace:)")));
- (SharedSkikoImageInfo *)makeS32Width:(int32_t)width height:(int32_t)height alphaType:(SharedSkikoColorAlphaType *)alphaType __attribute__((swift_name("makeS32(width:height:alphaType:)")));
- (SharedSkikoImageInfo *)makeUnknownWidth:(int32_t)width height:(int32_t)height __attribute__((swift_name("makeUnknown(width:height:)")));
@property (readonly) SharedSkikoImageInfo *DEFAULT __attribute__((swift_name("DEFAULT")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoData.Companion")))
@interface SharedSkikoDataCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSkikoDataCompanion *shared __attribute__((swift_name("shared")));
- (SharedSkikoData *)makeEmpty __attribute__((swift_name("makeEmpty()")));
- (SharedSkikoData *)makeFromBytesBytes:(SharedKotlinByteArray *)bytes offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("makeFromBytes(bytes:offset:length:)")));
- (SharedSkikoData *)makeUninitializedLength:(int32_t)length __attribute__((swift_name("makeUninitialized(length:)")));
- (SharedSkikoData *)makeWithoutCopyMemoryAddr:(void * _Nullable)memoryAddr length:(int32_t)length underlyingMemoryOwner:(SharedSkikoManaged *)underlyingMemoryOwner __attribute__((swift_name("makeWithoutCopy(memoryAddr:length:underlyingMemoryOwner:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPixmap.Companion")))
@interface SharedSkikoPixmapCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSkikoPixmapCompanion *shared __attribute__((swift_name("shared")));
- (SharedSkikoPixmap *)makeInfo:(SharedSkikoImageInfo *)info buffer:(SharedSkikoData *)buffer rowBytes:(int32_t)rowBytes __attribute__((swift_name("make(info:buffer:rowBytes:)")));
- (SharedSkikoPixmap *)makeInfo:(SharedSkikoImageInfo *)info addr:(void * _Nullable)addr rowBytes:(int32_t)rowBytes underlyingMemoryOwner:(SharedSkikoManaged * _Nullable)underlyingMemoryOwner __attribute__((swift_name("make(info:addr:rowBytes:underlyingMemoryOwner:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoBitmap.Companion")))
@interface SharedSkikoBitmapCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSkikoBitmapCompanion *shared __attribute__((swift_name("shared")));
- (SharedSkikoBitmap *)makeFromImageImage:(SharedSkikoImage *)image __attribute__((swift_name("makeFromImage(image:)")));
- (SharedSkikoBitmap *)makeFromImageImage:(SharedSkikoImage *)image context:(SharedSkikoDirectContext *)context __attribute__((swift_name("makeFromImage(image:context:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPixelRef")))
@interface SharedSkikoPixelRef : SharedSkikoRefCnt

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr __attribute__((swift_name("init(ptr:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithPtr:(void * _Nullable)ptr allowClose:(BOOL)allowClose __attribute__((swift_name("init(ptr:allowClose:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedSkikoPixelRefCompanion *companion __attribute__((swift_name("companion")));
- (SharedSkikoPixelRef *)notifyPixelsChanged __attribute__((swift_name("notifyPixelsChanged()")));
- (SharedSkikoPixelRef *)setImmutable __attribute__((swift_name("setImmutable()")));
@property (readonly) int32_t generationId __attribute__((swift_name("generationId")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) BOOL isImmutable __attribute__((swift_name("isImmutable")));
@property (readonly) void * _Nullable rowBytes __attribute__((swift_name("rowBytes")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoDirectContext.Companion")))
@interface SharedSkikoDirectContextCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSkikoDirectContextCompanion *shared __attribute__((swift_name("shared")));
- (SharedSkikoDirectContext *)makeDirect3DAdapterPtr:(void * _Nullable)adapterPtr devicePtr:(void * _Nullable)devicePtr queuePtr:(void * _Nullable)queuePtr __attribute__((swift_name("makeDirect3D(adapterPtr:devicePtr:queuePtr:)")));
- (SharedSkikoDirectContext *)makeGL __attribute__((swift_name("makeGL()")));
- (SharedSkikoDirectContext *)makeMetalDevicePtr:(void * _Nullable)devicePtr queuePtr:(void * _Nullable)queuePtr __attribute__((swift_name("makeMetal(devicePtr:queuePtr:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoGLBackendState")))
@interface SharedSkikoGLBackendState : SharedKotlinEnum<SharedSkikoGLBackendState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedSkikoGLBackendState *renderTarget __attribute__((swift_name("renderTarget")));
@property (class, readonly) SharedSkikoGLBackendState *textureBinding __attribute__((swift_name("textureBinding")));
@property (class, readonly) SharedSkikoGLBackendState *view __attribute__((swift_name("view")));
@property (class, readonly) SharedSkikoGLBackendState *blend __attribute__((swift_name("blend")));
@property (class, readonly) SharedSkikoGLBackendState *msaaEnable __attribute__((swift_name("msaaEnable")));
@property (class, readonly) SharedSkikoGLBackendState *vertex __attribute__((swift_name("vertex")));
@property (class, readonly) SharedSkikoGLBackendState *stencil __attribute__((swift_name("stencil")));
@property (class, readonly) SharedSkikoGLBackendState *pixelStore __attribute__((swift_name("pixelStore")));
@property (class, readonly) SharedSkikoGLBackendState *program __attribute__((swift_name("program")));
@property (class, readonly) SharedSkikoGLBackendState *fixedFunction __attribute__((swift_name("fixedFunction")));
@property (class, readonly) SharedSkikoGLBackendState *misc __attribute__((swift_name("misc")));
@property (class, readonly) SharedSkikoGLBackendState *pathRendering __attribute__((swift_name("pathRendering")));
+ (SharedKotlinArray<SharedSkikoGLBackendState *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoMatrix44.Companion")))
@interface SharedSkikoMatrix44Companion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSkikoMatrix44Companion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedSkikoMatrix44 *IDENTITY __attribute__((swift_name("IDENTITY")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoRuntimeEffect.Companion")))
@interface SharedSkikoRuntimeEffectCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSkikoRuntimeEffectCompanion *shared __attribute__((swift_name("shared")));
- (SharedSkikoRuntimeEffect *)makeForColorFilterSksl:(NSString *)sksl __attribute__((swift_name("makeForColorFilter(sksl:)")));
- (SharedSkikoRuntimeEffect *)makeForShaderSksl:(NSString *)sksl __attribute__((swift_name("makeForShader(sksl:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoMatrix22.Companion")))
@interface SharedSkikoMatrix22Companion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSkikoMatrix22Companion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedSkikoMatrix22 *IDENTITY __attribute__((swift_name("IDENTITY")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPathOp")))
@interface SharedSkikoPathOp : SharedKotlinEnum<SharedSkikoPathOp *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedSkikoPathOp *difference __attribute__((swift_name("difference")));
@property (class, readonly) SharedSkikoPathOp *intersect __attribute__((swift_name("intersect")));
@property (class, readonly) SharedSkikoPathOp *union_ __attribute__((swift_name("union_")));
@property (class, readonly) SharedSkikoPathOp *xor_ __attribute__((swift_name("xor_")));
@property (class, readonly) SharedSkikoPathOp *reverseDifference __attribute__((swift_name("reverseDifference")));
+ (SharedKotlinArray<SharedSkikoPathOp *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoRRect.Companion")))
@interface SharedSkikoRRectCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSkikoRRectCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (SharedSkikoRRect *)makeComplexLTRBL:(float)l t:(float)t r:(float)r b:(float)b radii:(SharedKotlinFloatArray *)radii __attribute__((swift_name("makeComplexLTRB(l:t:r:b:radii:)")));
- (SharedSkikoRRect *)makeComplexXYWHL:(float)l t:(float)t w:(float)w h:(float)h radii:(SharedKotlinFloatArray *)radii __attribute__((swift_name("makeComplexXYWH(l:t:w:h:radii:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (SharedSkikoRRect *)makeLTRBL:(float)l t:(float)t r:(float)r b:(float)b radius:(float)radius __attribute__((swift_name("makeLTRB(l:t:r:b:radius:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (SharedSkikoRRect *)makeLTRBL:(float)l t:(float)t r:(float)r b:(float)b xRad:(float)xRad yRad:(float)yRad __attribute__((swift_name("makeLTRB(l:t:r:b:xRad:yRad:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (SharedSkikoRRect *)makeLTRBL:(float)l t:(float)t r:(float)r b:(float)b tlRad:(float)tlRad trRad:(float)trRad brRad:(float)brRad blRad:(float)blRad __attribute__((swift_name("makeLTRB(l:t:r:b:tlRad:trRad:brRad:blRad:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (SharedSkikoRRect *)makeNinePatchLTRBL:(float)l t:(float)t r:(float)r b:(float)b lRad:(float)lRad tRad:(float)tRad rRad:(float)rRad bRad:(float)bRad __attribute__((swift_name("makeNinePatchLTRB(l:t:r:b:lRad:tRad:rRad:bRad:)")));
- (SharedSkikoRRect *)makeNinePatchXYWHL:(float)l t:(float)t w:(float)w h:(float)h lRad:(float)lRad tRad:(float)tRad rRad:(float)rRad bRad:(float)bRad __attribute__((swift_name("makeNinePatchXYWH(l:t:w:h:lRad:tRad:rRad:bRad:)")));
- (SharedSkikoRRect *)makeOvalLTRBL:(float)l t:(float)t r:(float)r b:(float)b __attribute__((swift_name("makeOvalLTRB(l:t:r:b:)")));
- (SharedSkikoRRect *)makeOvalXYWHL:(float)l t:(float)t w:(float)w h:(float)h __attribute__((swift_name("makeOvalXYWH(l:t:w:h:)")));
- (SharedSkikoRRect *)makePillLTRBL:(float)l t:(float)t r:(float)r b:(float)b __attribute__((swift_name("makePillLTRB(l:t:r:b:)")));
- (SharedSkikoRRect *)makePillXYWHL:(float)l t:(float)t w:(float)w h:(float)h __attribute__((swift_name("makePillXYWH(l:t:w:h:)")));
- (SharedSkikoRRect *)makeXYWHL:(float)l t:(float)t w:(float)w h:(float)h radius:(float)radius __attribute__((swift_name("makeXYWH(l:t:w:h:radius:)")));
- (SharedSkikoRRect *)makeXYWHL:(float)l t:(float)t w:(float)w h:(float)h xRad:(float)xRad yRad:(float)yRad __attribute__((swift_name("makeXYWH(l:t:w:h:xRad:yRad:)")));
- (SharedSkikoRRect *)makeXYWHL:(float)l t:(float)t w:(float)w h:(float)h tlRad:(float)tlRad trRad:(float)trRad brRad:(float)brRad blRad:(float)blRad __attribute__((swift_name("makeXYWH(l:t:w:h:tlRad:trRad:brRad:blRad:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPathSegmentIterator.Companion")))
@interface SharedSkikoPathSegmentIteratorCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSkikoPathSegmentIteratorCompanion *shared __attribute__((swift_name("shared")));
- (SharedSkikoPathSegmentIterator *)makePath:(SharedSkikoPath * _Nullable)path forceClose:(BOOL)forceClose __attribute__((swift_name("make(path:forceClose:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPathSegment")))
@interface SharedSkikoPathSegment : SharedBase
- (instancetype)initWithVerbOrdinal:(int32_t)verbOrdinal x0:(float)x0 y0:(float)y0 isClosedContour:(BOOL)isClosedContour __attribute__((swift_name("init(verbOrdinal:x0:y0:isClosedContour:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithX0:(float)x0 y0:(float)y0 x1:(float)x1 y1:(float)y1 isCloseLine:(BOOL)isCloseLine isClosedContour:(BOOL)isClosedContour __attribute__((swift_name("init(x0:y0:x1:y1:isCloseLine:isClosedContour:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithX0:(float)x0 y0:(float)y0 x1:(float)x1 y1:(float)y1 x2:(float)x2 y2:(float)y2 isClosedContour:(BOOL)isClosedContour __attribute__((swift_name("init(x0:y0:x1:y1:x2:y2:isClosedContour:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithX0:(float)x0 y0:(float)y0 x1:(float)x1 y1:(float)y1 x2:(float)x2 y2:(float)y2 conicWeight:(float)conicWeight isClosedContour:(BOOL)isClosedContour __attribute__((swift_name("init(x0:y0:x1:y1:x2:y2:conicWeight:isClosedContour:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithX0:(float)x0 y0:(float)y0 x1:(float)x1 y1:(float)y1 x2:(float)x2 y2:(float)y2 x3:(float)x3 y3:(float)y3 isClosedContour:(BOOL)isClosedContour __attribute__((swift_name("init(x0:y0:x1:y1:x2:y2:x3:y3:isClosedContour:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithVerb:(SharedSkikoPathVerb *)verb p0:(SharedSkikoPoint * _Nullable)p0 p1:(SharedSkikoPoint * _Nullable)p1 p2:(SharedSkikoPoint * _Nullable)p2 p3:(SharedSkikoPoint * _Nullable)p3 conicWeight:(float)conicWeight isCloseLine:(BOOL)isCloseLine isClosedContour:(BOOL)isClosedContour __attribute__((swift_name("init(verb:p0:p1:p2:p3:conicWeight:isCloseLine:isClosedContour:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float conicWeight __attribute__((swift_name("conicWeight")));
@property (readonly) BOOL isCloseLine __attribute__((swift_name("isCloseLine")));
@property (readonly) BOOL isClosedContour __attribute__((swift_name("isClosedContour")));
@property (readonly) SharedSkikoPoint * _Nullable p0 __attribute__((swift_name("p0")));
@property (readonly) SharedSkikoPoint * _Nullable p1 __attribute__((swift_name("p1")));
@property (readonly) SharedSkikoPoint * _Nullable p2 __attribute__((swift_name("p2")));
@property (readonly) SharedSkikoPoint * _Nullable p3 __attribute__((swift_name("p3")));
@property (readonly) SharedSkikoPathVerb *verb __attribute__((swift_name("verb")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkikoPixelRef.Companion")))
@interface SharedSkikoPixelRefCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedSkikoPixelRefCompanion *shared __attribute__((swift_name("shared")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
