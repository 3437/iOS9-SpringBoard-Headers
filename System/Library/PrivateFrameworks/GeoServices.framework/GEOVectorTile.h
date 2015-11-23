/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:22 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOFeatureStyleAttributes, NSMutableData, NSData, NSMutableOrderedSet, NSMutableArray;

@interface GEOVectorTile : NSObject {

	GEOTileKey _key;
	GEOFeatureStyleAttributes* _attributes;
	SCD_Struct_GE114* _lines;
	unsigned long long _linesCount;
	unsigned long long _linesVertexCount;
	SCD_Struct_GE145* _linesLabelAnnotations;
	unsigned long long _linesLabelAnnotationCount;
	SCD_Struct_GE146* _linesAnnotationBezierVertices;
	SCD_Struct_GE114* _coastlines;
	unsigned long long _coastlinesCount;
	SCD_Struct_GE147* _polygons;
	unsigned long long _polygonsCount;
	unsigned long long _polygonsVertexCount;
	SCD_Struct_GE98* _polygonLabelPositions;
	unsigned long long _polygonLabelPositionsCount;
	SCD_Struct_GE148* _buildingFootprints;
	NSMutableData* _extrusionHeightsPool;
	NSMutableData* _baseHeightsPool;
	unsigned long long _buildingFootprintsCount;
	SCD_Struct_GE148* _hiResBuildingFootprints;
	unsigned long long _hiResBuildingFootprintsCount;
	SCD_Struct_GE149* _threeDBuildings;
	unsigned long long _threeDBuildingsCount;
	SCD_Struct_GE150* _extendedPointAttributes;
	unsigned long long _extendedPointAttributesCount;
	SCD_Struct_GE99* _pois;
	unsigned long long _poisCount;
	SCD_Struct_GE151* _labelTextPlacements;
	unsigned _labelTextPlacementsCount;
	SCD_Struct_GE152* _overpasses;
	SCD_Struct_GE153* _junctions;
	unsigned long long _junctionsCount;
	BOOL _hasComputedJunctions;
	SCD_Struct_GE154* _laneConnections;
	unsigned long long _laneConnectionsCount;
	SCD_Struct_GE154* _pointsOnRoad;
	unsigned long long _pointsOnRoadCount;
	/*function pointer*/void** _sortedPointsOnRoad;
	SCD_Struct_GE155* _laneGeometry;
	SCD_Struct_GE156* _curveLineVertices;
	unsigned* _curveToLineMapping;
	SCD_Struct_GE146* _lineVertices;
	SCD_Struct_GE146* _polygonVertices;
	SCD_Struct_GE146* _coastlineVertices;
	SCD_Struct_GE146* _footprintVertices;
	SCD_Struct_GE146* _hiResFootprintVertices;
	NSData* _labelPool;
	SCD_Struct_GE157* _labelPoolLanguages;
	unsigned long long _labelPoolLanguagesLength;
	NSMutableData* _localizedLabelPool;
	char* _localizedLabelsLanguage;
	SCD_Struct_GE158* _labelIndex;
	unsigned long long _labelIndexCount;
	GEOFeatureShield* _shieldIndex;
	unsigned long long _shieldIndexCount;
	SCD_Struct_GE159* _localizationTable;
	unsigned long long _localizationTableCount;
	NSMutableOrderedSet* _uniqueAttributes;
	NSMutableArray* _uniqueFeatureAttributes;
	SCD_Struct_GE162* _lineCharacteristicPoints;
	unsigned long long _lineCharacteristicPointCount;
	SCD_Struct_GE162* _polygonCharacteristicPoints;
	unsigned long long _polygonCharacteristicPointCount;
	SCD_Struct_GE162* _coastlineCharacteristicPoints;
	unsigned long long _coastlineCharacteristicPointCount;
	unsigned long long _tileReferenceCount;
	GEOTileKey* _tileReferences;
	SCD_Struct_GE163* _transitLines;
	unsigned long long _transitLineCount;
	SCD_Struct_GE164* _transitSystems;
	unsigned long long _transitSystemCount;
	SCD_Struct_GE165* _transitLinks;
	unsigned long long _transitLinkCount;
	SCD_Struct_GE105* _transitLinkLineKeys;
	unsigned long long* _transitLinkLineIndices;
	unsigned long long _transitLinkLineIndicesCount;
	SCD_Struct_GE146* _transitVertices;
	GEOTransitNodeFeature* _transitNodes;
	unsigned long long _transitNodeCount;
	unsigned long long* _transitNodeSystemIndices;
	unsigned long long _transitNodeIndexCount;
	SCD_Struct_GE146* _transitStationTransferVertices;
	SCD_Struct_GE166* _transitStationTransfers;
	unsigned long long _transitStationTransferCount;
	SCD_Struct_GE153* _transitJunctions;
	unsigned long long _transitJunctionCount;
	SCD_Struct_GE154* _transitPointsOnRoad;
	unsigned long long _transitPointsOnRoadCount;
	unsigned* _transitTravelTimes;
	unsigned long long* _transitNodeParentIDs;
	unsigned long long _transitNodeParentIDCount;
	SCD_Struct_GE145* _transitLinkLabelAnnotations;
	unsigned long long _transitLinkLabelAnnotationCount;
	SCD_Struct_GE146* _transitLinkAnnotationBezierVertices;
	unsigned long long* _idsOfTransitNodesNotInTile;
	SCD_Struct_GE167* _transitAccessPoints;
	unsigned long long _transitAccessPointCount;
	SCD_Struct_GE105* _transitNodeLineKeys;
	unsigned long long* _transitNodeLineIndices;
	unsigned long long _transitNodeLineIndicesCount;
	SCD_Struct_GE105* _transitNodeSubtitleLineKeys;
	unsigned long long* _transitNodeSubtitleLineIndices;
	unsigned long long _transitNodeSubtitleLineIndicesCount;
	unsigned long long* _transitShieldIndices;
	unsigned char* _transitLineDirections;
	unsigned long long* _originalTransitNodeIDs;
	unsigned long long* _originalTransitNodeIDPointers;
	float* _transitLinkSectionStartOffsets;
	float* _transitLinkSectionEndOffsets;
	char _transitCoverage;
	id* _transitNodeStyleAttributes;
	unsigned long long* _hallOrderIDs;
	BOOL* _shouldDrawEndPoint;
	unsigned long long* _transitNodeCollapseIndices;
	unsigned long long _transitNodeCollapseIndexCount;
	unsigned long long* _transitNodeCollapseIDs;
	unsigned long long _transitNodeCollapseIDCount;

}

@property (nonatomic,readonly) SCD_Struct_GE114* lines;                                            //@synthesize lines=_lines - In the implementation block
@property (nonatomic,readonly) unsigned long long linesCount;                                      //@synthesize linesCount=_linesCount - In the implementation block
@property (nonatomic,readonly) unsigned long long linesVertexCount;                                //@synthesize linesVertexCount=_linesVertexCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE145* linesLabelAnnotations;                            //@synthesize linesLabelAnnotations=_linesLabelAnnotations - In the implementation block
@property (nonatomic,readonly) unsigned long long linesLabelAnnotationCount;                       //@synthesize linesLabelAnnotationCount=_linesLabelAnnotationCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE114* coastlines;                                       //@synthesize coastlines=_coastlines - In the implementation block
@property (nonatomic,readonly) unsigned long long coastlinesCount;                                 //@synthesize coastlinesCount=_coastlinesCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE147* polygons;                                         //@synthesize polygons=_polygons - In the implementation block
@property (nonatomic,readonly) unsigned long long polygonsCount;                                   //@synthesize polygonsCount=_polygonsCount - In the implementation block
@property (nonatomic,readonly) unsigned long long polygonsVertexCount;                             //@synthesize polygonsVertexCount=_polygonsVertexCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE148* buildingFootprints;                               //@synthesize buildingFootprints=_buildingFootprints - In the implementation block
@property (nonatomic,readonly) unsigned long long buildingFootprintsCount;                         //@synthesize buildingFootprintsCount=_buildingFootprintsCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE148* hiResBuildingFootprints;                          //@synthesize hiResBuildingFootprints=_hiResBuildingFootprints - In the implementation block
@property (nonatomic,readonly) unsigned long long hiResBuildingFootprintsCount;                    //@synthesize hiResBuildingFootprintsCount=_hiResBuildingFootprintsCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE149* threeDBuildings;                                  //@synthesize threeDBuildings=_threeDBuildings - In the implementation block
@property (nonatomic,readonly) unsigned long long threeDBuildingsCount;                            //@synthesize threeDBuildingsCount=_threeDBuildingsCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE99* pois;                                              //@synthesize pois=_pois - In the implementation block
@property (nonatomic,readonly) unsigned long long poisCount;                                       //@synthesize poisCount=_poisCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE151* labelTextPlacements;                              //@synthesize labelTextPlacements=_labelTextPlacements - In the implementation block
@property (nonatomic,readonly) unsigned labelTextPlacementsCount;                                  //@synthesize labelTextPlacementsCount=_labelTextPlacementsCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE152* overpasses;                                       //@synthesize overpasses=_overpasses - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE153* junctions;                                        //@synthesize junctions=_junctions - In the implementation block
@property (nonatomic,readonly) unsigned long long junctionsCount;                                  //@synthesize junctionsCount=_junctionsCount - In the implementation block
@property (nonatomic,readonly) BOOL hasComputedJunctions;                                          //@synthesize hasComputedJunctions=_hasComputedJunctions - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE154* pointsOnRoad;                                     //@synthesize pointsOnRoad=_pointsOnRoad - In the implementation block
@property (nonatomic,readonly) unsigned long long pointsOnRoadCount;                               //@synthesize pointsOnRoadCount=_pointsOnRoadCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE154* laneConnections;                                  //@synthesize laneConnections=_laneConnections - In the implementation block
@property (nonatomic,readonly) unsigned long long laneConnectionsCount;                            //@synthesize laneConnectionsCount=_laneConnectionsCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE162* lineCharacteristicPoints;                         //@synthesize lineCharacteristicPoints=_lineCharacteristicPoints - In the implementation block
@property (nonatomic,readonly) unsigned long long lineCharacteristicPointCount;                    //@synthesize lineCharacteristicPointCount=_lineCharacteristicPointCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE162* polygonCharacteristicPoints;                      //@synthesize polygonCharacteristicPoints=_polygonCharacteristicPoints - In the implementation block
@property (nonatomic,readonly) unsigned long long polygonCharacteristicPointCount;                 //@synthesize polygonCharacteristicPointCount=_polygonCharacteristicPointCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE162* coastlineCharacteristicPoints;                    //@synthesize coastlineCharacteristicPoints=_coastlineCharacteristicPoints - In the implementation block
@property (nonatomic,readonly) unsigned long long coastlineCharacteristicPointCount;               //@synthesize coastlineCharacteristicPointCount=_coastlineCharacteristicPointCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE156* curveLineVertices; 
@property (nonatomic,readonly) SCD_Struct_GE146* lineVertices; 
@property (nonatomic,readonly) GEOTileKey tileKey;                                                 //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL dataIncludesConnectivity; 
@property (nonatomic,readonly) unsigned long long tileReferenceCount;                              //@synthesize tileReferenceCount=_tileReferenceCount - In the implementation block
@property (nonatomic,readonly) GEOTileKey* tileReferences;                                         //@synthesize tileReferences=_tileReferences - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE163* transitLines;                                     //@synthesize transitLines=_transitLines - In the implementation block
@property (nonatomic,readonly) unsigned long long transitLineCount;                                //@synthesize transitLineCount=_transitLineCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE164* transitSystems;                                   //@synthesize transitSystems=_transitSystems - In the implementation block
@property (nonatomic,readonly) unsigned long long transitSystemCount;                              //@synthesize transitSystemCount=_transitSystemCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE165* transitLinks;                                     //@synthesize transitLinks=_transitLinks - In the implementation block
@property (nonatomic,readonly) unsigned long long transitLinkCount;                                //@synthesize transitLinkCount=_transitLinkCount - In the implementation block
@property (nonatomic,readonly) unsigned long long* transitLinkLineIndices;                         //@synthesize transitLinkLineIndices=_transitLinkLineIndices - In the implementation block
@property (nonatomic,readonly) unsigned long long transitLinkLineIndicesCount;                     //@synthesize transitLinkLineIndicesCount=_transitLinkLineIndicesCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE146* transitVertices;                                  //@synthesize transitVertices=_transitVertices - In the implementation block
@property (nonatomic,readonly) GEOTransitNodeFeature* transitNodes;                                //@synthesize transitNodes=_transitNodes - In the implementation block
@property (nonatomic,readonly) unsigned long long transitNodeCount;                                //@synthesize transitNodeCount=_transitNodeCount - In the implementation block
@property (nonatomic,readonly) unsigned long long* transitNodeSystemIndices;                       //@synthesize transitNodeSystemIndices=_transitNodeSystemIndices - In the implementation block
@property (nonatomic,readonly) unsigned long long transitNodeIndexCount;                           //@synthesize transitNodeIndexCount=_transitNodeIndexCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE146* transitStationTransferVertices;                   //@synthesize transitStationTransferVertices=_transitStationTransferVertices - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE166* transitStationTransfers;                          //@synthesize transitStationTransfers=_transitStationTransfers - In the implementation block
@property (nonatomic,readonly) unsigned long long transitStationTransferCount;                     //@synthesize transitStationTransferCount=_transitStationTransferCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE153* transitJunctions;                                 //@synthesize transitJunctions=_transitJunctions - In the implementation block
@property (nonatomic,readonly) unsigned long long transitJunctionCount;                            //@synthesize transitJunctionCount=_transitJunctionCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE154* transitPointsOnRoad;                              //@synthesize transitPointsOnRoad=_transitPointsOnRoad - In the implementation block
@property (nonatomic,readonly) unsigned long long transitPointsOnRoadCount;                        //@synthesize transitPointsOnRoadCount=_transitPointsOnRoadCount - In the implementation block
@property (nonatomic,readonly) unsigned* transitTravelTimes;                                       //@synthesize transitTravelTimes=_transitTravelTimes - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE167* transitAccessPoints;                              //@synthesize transitAccessPoints=_transitAccessPoints - In the implementation block
@property (nonatomic,readonly) unsigned long long transitAccessPointCount;                         //@synthesize transitAccessPointCount=_transitAccessPointCount - In the implementation block
@property (nonatomic,readonly) unsigned long long* transitNodeLineIndices;                         //@synthesize transitNodeLineIndices=_transitNodeLineIndices - In the implementation block
@property (nonatomic,readonly) unsigned long long* transitNodeSubtitleLineIndices;                 //@synthesize transitNodeSubtitleLineIndices=_transitNodeSubtitleLineIndices - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE145* transitLinkLabelAnnotations;                      //@synthesize transitLinkLabelAnnotations=_transitLinkLabelAnnotations - In the implementation block
@property (nonatomic,readonly) unsigned long long transitLinkLabelAnnotationCount;                 //@synthesize transitLinkLabelAnnotationCount=_transitLinkLabelAnnotationCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE146* transitLinkAnnotationBezierVertices;              //@synthesize transitLinkAnnotationBezierVertices=_transitLinkAnnotationBezierVertices - In the implementation block
@property (nonatomic,readonly) unsigned long long* transitShieldIndices;                           //@synthesize transitShieldIndices=_transitShieldIndices - In the implementation block
@property (nonatomic,readonly) unsigned char* transitLineDirections;                               //@synthesize transitLineDirections=_transitLineDirections - In the implementation block
@property (nonatomic,readonly) const float* transitLinkSectionStartOffsets;                        //@synthesize transitLinkSectionStartOffsets=_transitLinkSectionStartOffsets - In the implementation block
@property (nonatomic,readonly) const float* transitLinkSectionEndOffsets;                          //@synthesize transitLinkSectionEndOffsets=_transitLinkSectionEndOffsets - In the implementation block
@property (nonatomic,readonly) char transitCoverage;                                               //@synthesize transitCoverage=_transitCoverage - In the implementation block
@property (nonatomic,readonly) unsigned long long* transitNodeCollapseIndices;                     //@synthesize transitNodeCollapseIndices=_transitNodeCollapseIndices - In the implementation block
@property (nonatomic,readonly) unsigned long long transitNodeCollapseIndexCount;                   //@synthesize transitNodeCollapseIndexCount=_transitNodeCollapseIndexCount - In the implementation block
@property (nonatomic,readonly) unsigned long long* transitNodeCollapseIDs;                         //@synthesize transitNodeCollapseIDs=_transitNodeCollapseIDs - In the implementation block
@property (nonatomic,readonly) unsigned long long transitNodeCollapseIDCount;                      //@synthesize transitNodeCollapseIDCount=_transitNodeCollapseIDCount - In the implementation block
-(BOOL)_readCoverage:(SCD_Struct_GE169*)arg1 ;
-(BOOL)_addGenericPolygonWithAttributes:(int*)arg1 ;
-(BOOL)_readLowResBuildings:(SCD_Struct_GE169*)arg1 ;
-(BOOL)_readHighResBuildings:(SCD_Struct_GE169*)arg1 ;
-(BOOL)_readExtendedPointAttributes:(SCD_Struct_GE169*)arg1 ;
-(id)addAttributes:(id)arg1 toUniqueAttributeSet:(id)arg2 ;
-(BOOL)_readTileReferences:(SCD_Struct_GE169*)arg1 key:(const GEOTileKey*)arg2 ;
-(BOOL)_readWrappingCoastlines:(SCD_Struct_GE171*)arg1 tile:(SCD_Struct_GE169*)arg2 ;
-(BOOL)_readLabels:(SCD_Struct_GE169*)arg1 ;
-(BOOL)_readLines:(SCD_Struct_GE169*)arg1 ;
-(BOOL)_decodeLabelTextPlacementsFromStream:(SCD_Struct_GE170*)arg1 count:(unsigned long long)arg2 firstFeature:(SCD_Struct_GE99*)arg3 featureStride:(unsigned long long)arg4 tilePrecision:(unsigned char)arg5 ;
-(BOOL)_readCoastlines:(SCD_Struct_GE169*)arg1 ;
-(BOOL)_readTransitSystems:(SCD_Struct_GE169*)arg1 key:(const GEOTileKey*)arg2 ;
-(BOOL)_readModernBuildings:(SCD_Struct_GE169*)arg1 chapter:(unsigned short)arg2 vertexPool:(/*function pointer*/void**)arg3 footprints:(/*function pointer*/void**)arg4 count:(unsigned long long*)arg5 ;
-(unsigned long long)_makeSpaceForShields:(unsigned long long)arg1 ;
-(BOOL)_handleGenericTile:(SCD_Struct_GE169*)arg1 ;
-(id)_initWithVMP4:(id)arg1 localizationData:(id)arg2 tileKey:(const GEOTileKey*)arg3 ;
-(BOOL)_readTransitMZROverride:(SCD_Struct_GE169*)arg1 ;
-(BOOL)_readLabelAnnotations:(SCD_Struct_GE169*)arg1 key:(const GEOTileKey*)arg2 forLines:(BOOL)arg3 ;
-(BOOL)_decodeTransitLabelsFromStream:(SCD_Struct_GE170*)arg1 count:(unsigned long long)arg2 firstFeature:(SCD_Struct_GE97*)arg3 featureStride:(unsigned long long)arg4 ;
-(BOOL)_read3DBuildings:(SCD_Struct_GE169*)arg1 ;
-(BOOL)_convertTransitLineKeys:(/*function pointer*/void**)arg1 countKeys:(unsigned long long)arg2 lineIndices:(unsigned long long*)arg3 ;
-(unsigned long long)_makeSpaceForLabels:(unsigned long long)arg1 ;
-(BOOL)_readSimpleCoastlines:(SCD_Struct_GE171*)arg1 tile:(SCD_Struct_GE169*)arg2 ;
-(BOOL)_readInfoChapter:(SCD_Struct_GE169*)arg1 key:(const GEOTileKey*)arg2 ;
-(BOOL)_readPois:(SCD_Struct_GE169*)arg1 ;
-(BOOL)_readPolygons:(SCD_Struct_GE169*)arg1 ;
-(BOOL)_readTransitNetwork:(SCD_Struct_GE169*)arg1 key:(const GEOTileKey*)arg2 ;
-(BOOL)_readPolygons:(SCD_Struct_GE169*)arg1 ofType:(unsigned short)arg2 ;
-(BOOL)_readTransitSystemsChapterLabelSet:(SCD_Struct_GE170*)arg1 featureCount:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)_populateTransitNodeStyleAttributes;
-(BOOL)_readTransitSystemsChapterIDSet:(SCD_Struct_GE170*)arg1 featureCount:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)_findJunctions;
-(void)_trimWhitespace;
-(void)_findOverpasses;
-(void)_attachRoadPoints;
-(BOOL)_populateTransitConnectivity;
-(void)dealloc;
-(id)description;
-(unsigned long long)linesCount;
-(SCD_Struct_GE114*)lines;
-(SCD_Struct_GE156*)curveLineVertices;
-(unsigned long long)threeDBuildingsCount;
-(SCD_Struct_GE154*)transitPointsOnRoad;
-(unsigned*)transitTravelTimes;
-(SCD_Struct_GE163*)transitLines;
-(SCD_Struct_GE149*)threeDBuildings;
-(unsigned long long)polygonsCount;
-(unsigned long long)transitPointsOnRoadCount;
-(SCD_Struct_GE114*)multiSectionFeatureForGeoID:(unsigned long long)arg1 ;
-(unsigned long long)poisCount;
-(GEOTileKey)tileKey;
-(GEOTransitNodeFeature*)transitNodeForFeatureID:(unsigned long long)arg1 ;
-(SCD_Struct_GE153*)transitJunctions;
-(SCD_Struct_GE147*)polygons;
-(unsigned long long)transitStationTransferCount;
-(SCD_Struct_GE154*)pointsOnRoad;
-(SCD_Struct_GE151*)labelTextPlacements;
-(unsigned long long)transitJunctionCount;
-(unsigned long long)tileReferenceCount;
-(SCD_Struct_GE99*)pois;
-(unsigned long long*)transitNodeCollapseIDs;
-(unsigned long long)transitNodeCollapseIDCount;
-(/*function pointer*/void**)sortedPointsOnRoad;
-(GEOTileKey*)tileReferences;
-(id)initWithTileData:(id)arg1 localizationData:(id)arg2 tileKey:(const GEOTileKey*)arg3 ;
-(unsigned long long)buildingFootprintsCount;
-(unsigned long long)linesVertexCount;
-(unsigned long long)transitNodeCollapseIndexCount;
-(SCD_Struct_GE162*)coastlineCharacteristicPoints;
-(SCD_Struct_GE146*)transitStationTransferVertices;
-(SCD_Struct_GE148*)buildingFootprints;
-(unsigned long long)coastlineCharacteristicPointCount;
-(void)forEachJunctionInRoad:(SCD_Struct_GE114*)arg1 visitor:(/*^block*/id)arg2 ;
-(unsigned long long)transitLinkCount;
-(SCD_Struct_GE166*)transitStationTransfers;
-(unsigned long long*)transitNodeCollapseIndices;
-(unsigned long long)polygonsVertexCount;
-(unsigned long long)transitNodeCount;
-(const float*)transitLinkSectionEndOffsets;
-(BOOL)dataIncludesConnectivity;
-(unsigned long long)lineCharacteristicPointCount;
-(unsigned long long)hiResBuildingFootprintsCount;
-(char)transitCoverage;
-(SCD_Struct_GE146*)lineVertices;
-(unsigned long long)transitNodeIndexCount;
-(SCD_Struct_GE162*)polygonCharacteristicPoints;
-(SCD_Struct_GE148*)hiResBuildingFootprints;
-(unsigned long long*)transitNodeSystemIndices;
-(unsigned long long)polygonCharacteristicPointCount;
-(void)forEachPolygon:(/*^block*/id)arg1 ;
-(SCD_Struct_GE154*)laneConnections;
-(unsigned char*)transitLineDirections;
-(SCD_Struct_GE146*)transitVertices;
-(GEOTransitNodeFeature*)transitNodes;
-(unsigned long long)pointsOnRoadCount;
-(void)forEachPoint:(/*^block*/id)arg1 ;
-(unsigned long long*)transitShieldIndices;
-(unsigned long long)linesLabelAnnotationCount;
-(const float*)transitLinkSectionStartOffsets;
-(BOOL)hasComputedJunctions;
-(void)forEachEdgeOnJunction:(const SCD_Struct_GE153*)arg1 visitor:(/*^block*/id)arg2 ;
-(unsigned long long*)transitLinkLineIndices;
-(void)forEachTransitLinkOnJunction:(const SCD_Struct_GE153*)arg1 visitor:(/*^block*/id)arg2 ;
-(unsigned long long)transitLinkLabelAnnotationCount;
-(void)forEachJunction:(/*^block*/id)arg1 ;
-(SCD_Struct_GE162*)lineCharacteristicPoints;
-(SCD_Struct_GE145*)transitLinkLabelAnnotations;
-(unsigned long long)coastlinesCount;
-(unsigned long long)laneConnectionsCount;
-(SCD_Struct_GE114*)coastlines;
-(SCD_Struct_GE146*)transitLinkAnnotationBezierVertices;
-(unsigned long long)transitLinkLineIndicesCount;
-(id)extrusionHeightsPool;
-(unsigned long long*)transitNodeLineIndices;
-(unsigned long long)transitSystemCount;
-(SCD_Struct_GE152*)overpasses;
-(SCD_Struct_GE165*)transitLinks;
-(SCD_Struct_GE164*)transitSystemInfoForFeatureID:(unsigned long long)arg1 ;
-(SCD_Struct_GE163*)transitLineForFeatureID:(unsigned long long)arg1 ;
-(unsigned long long)transitAccessPointCount;
-(SCD_Struct_GE98*)polygonLabelPositions;
-(unsigned)labelTextPlacementsCount;
-(void)forEachEdgeInRoad:(SCD_Struct_GE114*)arg1 visitTwice:(BOOL)arg2 visitor:(/*^block*/id)arg3 ;
-(SCD_Struct_GE167*)transitAccessPointForFeatureID:(unsigned long long)arg1 ;
-(unsigned long long*)transitNodeSubtitleLineIndices;
-(id)baseHeightsPool;
-(SCD_Struct_GE167*)transitAccessPoints;
-(unsigned long long)transitLineCount;
-(unsigned long long)junctionsCount;
-(SCD_Struct_GE164*)transitSystems;
-(SCD_Struct_GE145*)linesLabelAnnotations;
-(SCD_Struct_GE153*)junctions;
-(void)forEachRoad:(/*^block*/id)arg1 ;
@end
