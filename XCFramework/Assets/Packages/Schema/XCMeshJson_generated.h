/* XCFrameworkEngine
 * Copyright (C) Abhishek Porwal, 2016
 * Any queries? Contact author <https://github.com/abhishekp314>
 * This program is complaint with GNU General Public License, version 3.
 * For complete license, read License.txt in source root directory. */

// automatically generated by the FlatBuffers compiler, do not modify

#ifndef FLATBUFFERS_GENERATED_XCMESHJSON_H_
#define FLATBUFFERS_GENERATED_XCMESHJSON_H_

#include "flatbuffers/flatbuffers.h"



struct Vec2;
struct Vec3;
struct Vec4;
struct FBBasicMaterial;
struct child;
struct bone;
struct texturecoord;
struct mesh;
struct materialproperty;
struct material;
struct positionkey;
struct rotationkey;
struct scalingkey;
struct channel;
struct animation;
struct rn;
struct header;
struct FBMesh;

struct child FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  const flatbuffers::String *name() const { return GetPointer<const flatbuffers::String *>(4); }
  const flatbuffers::Vector<float> *transformation() const { return GetPointer<const flatbuffers::Vector<float> *>(6); }
  const flatbuffers::Vector<flatbuffers::Offset<child>> *children() const { return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<child>> *>(8); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 4 /* name */) &&
           verifier.Verify(name()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 6 /* transformation */) &&
           verifier.Verify(transformation()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 8 /* children */) &&
           verifier.Verify(children()) &&
           verifier.VerifyVectorOfTables(children()) &&
           verifier.EndTable();
  }
};

struct childBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_name(flatbuffers::Offset<flatbuffers::String> name) { fbb_.AddOffset(4, name); }
  void add_transformation(flatbuffers::Offset<flatbuffers::Vector<float>> transformation) { fbb_.AddOffset(6, transformation); }
  void add_children(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<child>>> children) { fbb_.AddOffset(8, children); }
  childBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  childBuilder &operator=(const childBuilder &);
  flatbuffers::Offset<child> Finish() {
    auto o = flatbuffers::Offset<child>(fbb_.EndTable(start_, 3));
    return o;
  }
};

inline flatbuffers::Offset<child> Createchild(flatbuffers::FlatBufferBuilder &_fbb,
   flatbuffers::Offset<flatbuffers::String> name = 0,
   flatbuffers::Offset<flatbuffers::Vector<float>> transformation = 0,
   flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<child>>> children = 0) {
  childBuilder builder_(_fbb);
  builder_.add_children(children);
  builder_.add_transformation(transformation);
  builder_.add_name(name);
  return builder_.Finish();
}

struct bone FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  const flatbuffers::String *name() const { return GetPointer<const flatbuffers::String *>(4); }
  const flatbuffers::Vector<float> *offsetmatrix() const { return GetPointer<const flatbuffers::Vector<float> *>(6); }
  const flatbuffers::Vector<int32_t> *weights() const { return GetPointer<const flatbuffers::Vector<int32_t> *>(8); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 4 /* name */) &&
           verifier.Verify(name()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 6 /* offsetmatrix */) &&
           verifier.Verify(offsetmatrix()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 8 /* weights */) &&
           verifier.Verify(weights()) &&
           verifier.EndTable();
  }
};

struct boneBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_name(flatbuffers::Offset<flatbuffers::String> name) { fbb_.AddOffset(4, name); }
  void add_offsetmatrix(flatbuffers::Offset<flatbuffers::Vector<float>> offsetmatrix) { fbb_.AddOffset(6, offsetmatrix); }
  void add_weights(flatbuffers::Offset<flatbuffers::Vector<int32_t>> weights) { fbb_.AddOffset(8, weights); }
  boneBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  boneBuilder &operator=(const boneBuilder &);
  flatbuffers::Offset<bone> Finish() {
    auto o = flatbuffers::Offset<bone>(fbb_.EndTable(start_, 3));
    return o;
  }
};

inline flatbuffers::Offset<bone> Createbone(flatbuffers::FlatBufferBuilder &_fbb,
   flatbuffers::Offset<flatbuffers::String> name = 0,
   flatbuffers::Offset<flatbuffers::Vector<float>> offsetmatrix = 0,
   flatbuffers::Offset<flatbuffers::Vector<int32_t>> weights = 0) {
  boneBuilder builder_(_fbb);
  builder_.add_weights(weights);
  builder_.add_offsetmatrix(offsetmatrix);
  builder_.add_name(name);
  return builder_.Finish();
}

struct texturecoord FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  const flatbuffers::Vector<float> *texcoords() const { return GetPointer<const flatbuffers::Vector<float> *>(4); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 4 /* texcoords */) &&
           verifier.Verify(texcoords()) &&
           verifier.EndTable();
  }
};

struct texturecoordBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_texcoords(flatbuffers::Offset<flatbuffers::Vector<float>> texcoords) { fbb_.AddOffset(4, texcoords); }
  texturecoordBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  texturecoordBuilder &operator=(const texturecoordBuilder &);
  flatbuffers::Offset<texturecoord> Finish() {
    auto o = flatbuffers::Offset<texturecoord>(fbb_.EndTable(start_, 1));
    return o;
  }
};

inline flatbuffers::Offset<texturecoord> Createtexturecoord(flatbuffers::FlatBufferBuilder &_fbb,
   flatbuffers::Offset<flatbuffers::Vector<float>> texcoords = 0) {
  texturecoordBuilder builder_(_fbb);
  builder_.add_texcoords(texcoords);
  return builder_.Finish();
}

struct mesh FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  const flatbuffers::String *name() const { return GetPointer<const flatbuffers::String *>(4); }
  int32_t materialindex() const { return GetField<int32_t>(6, 0); }
  int32_t primitivetypes() const { return GetField<int32_t>(8, 0); }
  const flatbuffers::Vector<float> *vertices() const { return GetPointer<const flatbuffers::Vector<float> *>(10); }
  const flatbuffers::Vector<float> *normals() const { return GetPointer<const flatbuffers::Vector<float> *>(12); }
  const flatbuffers::Vector<float> *tangents() const { return GetPointer<const flatbuffers::Vector<float> *>(14); }
  const flatbuffers::Vector<float> *bitangents() const { return GetPointer<const flatbuffers::Vector<float> *>(16); }
  const flatbuffers::Vector<int32_t> *numuvcomponents() const { return GetPointer<const flatbuffers::Vector<int32_t> *>(18); }
  const flatbuffers::Vector<flatbuffers::Offset<texturecoord>> *texturecoords() const { return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<texturecoord>> *>(20); }
  const flatbuffers::Vector<flatbuffers::Offset<bone>> *bones() const { return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<bone>> *>(22); }
  const flatbuffers::Vector<int32_t> *faces() const { return GetPointer<const flatbuffers::Vector<int32_t> *>(24); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 4 /* name */) &&
           verifier.Verify(name()) &&
           VerifyField<int32_t>(verifier, 6 /* materialindex */) &&
           VerifyField<int32_t>(verifier, 8 /* primitivetypes */) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 10 /* vertices */) &&
           verifier.Verify(vertices()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 12 /* normals */) &&
           verifier.Verify(normals()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 14 /* tangents */) &&
           verifier.Verify(tangents()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 16 /* bitangents */) &&
           verifier.Verify(bitangents()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 18 /* numuvcomponents */) &&
           verifier.Verify(numuvcomponents()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 20 /* texturecoords */) &&
           verifier.Verify(texturecoords()) &&
           verifier.VerifyVectorOfTables(texturecoords()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 22 /* bones */) &&
           verifier.Verify(bones()) &&
           verifier.VerifyVectorOfTables(bones()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 24 /* faces */) &&
           verifier.Verify(faces()) &&
           verifier.EndTable();
  }
};

struct meshBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_name(flatbuffers::Offset<flatbuffers::String> name) { fbb_.AddOffset(4, name); }
  void add_materialindex(int32_t materialindex) { fbb_.AddElement<int32_t>(6, materialindex, 0); }
  void add_primitivetypes(int32_t primitivetypes) { fbb_.AddElement<int32_t>(8, primitivetypes, 0); }
  void add_vertices(flatbuffers::Offset<flatbuffers::Vector<float>> vertices) { fbb_.AddOffset(10, vertices); }
  void add_normals(flatbuffers::Offset<flatbuffers::Vector<float>> normals) { fbb_.AddOffset(12, normals); }
  void add_tangents(flatbuffers::Offset<flatbuffers::Vector<float>> tangents) { fbb_.AddOffset(14, tangents); }
  void add_bitangents(flatbuffers::Offset<flatbuffers::Vector<float>> bitangents) { fbb_.AddOffset(16, bitangents); }
  void add_numuvcomponents(flatbuffers::Offset<flatbuffers::Vector<int32_t>> numuvcomponents) { fbb_.AddOffset(18, numuvcomponents); }
  void add_texturecoords(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<texturecoord>>> texturecoords) { fbb_.AddOffset(20, texturecoords); }
  void add_bones(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<bone>>> bones) { fbb_.AddOffset(22, bones); }
  void add_faces(flatbuffers::Offset<flatbuffers::Vector<int32_t>> faces) { fbb_.AddOffset(24, faces); }
  meshBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  meshBuilder &operator=(const meshBuilder &);
  flatbuffers::Offset<mesh> Finish() {
    auto o = flatbuffers::Offset<mesh>(fbb_.EndTable(start_, 11));
    return o;
  }
};

inline flatbuffers::Offset<mesh> Createmesh(flatbuffers::FlatBufferBuilder &_fbb,
   flatbuffers::Offset<flatbuffers::String> name = 0,
   int32_t materialindex = 0,
   int32_t primitivetypes = 0,
   flatbuffers::Offset<flatbuffers::Vector<float>> vertices = 0,
   flatbuffers::Offset<flatbuffers::Vector<float>> normals = 0,
   flatbuffers::Offset<flatbuffers::Vector<float>> tangents = 0,
   flatbuffers::Offset<flatbuffers::Vector<float>> bitangents = 0,
   flatbuffers::Offset<flatbuffers::Vector<int32_t>> numuvcomponents = 0,
   flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<texturecoord>>> texturecoords = 0,
   flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<bone>>> bones = 0,
   flatbuffers::Offset<flatbuffers::Vector<int32_t>> faces = 0) {
  meshBuilder builder_(_fbb);
  builder_.add_faces(faces);
  builder_.add_bones(bones);
  builder_.add_texturecoords(texturecoords);
  builder_.add_numuvcomponents(numuvcomponents);
  builder_.add_bitangents(bitangents);
  builder_.add_tangents(tangents);
  builder_.add_normals(normals);
  builder_.add_vertices(vertices);
  builder_.add_primitivetypes(primitivetypes);
  builder_.add_materialindex(materialindex);
  builder_.add_name(name);
  return builder_.Finish();
}

struct materialproperty FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  const flatbuffers::String *key() const { return GetPointer<const flatbuffers::String *>(4); }
  int32_t semantic() const { return GetField<int32_t>(6, 0); }
  int32_t index() const { return GetField<int32_t>(8, 0); }
  int32_t type() const { return GetField<int32_t>(10, 0); }
  const flatbuffers::String *value() const { return GetPointer<const flatbuffers::String *>(12); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 4 /* key */) &&
           verifier.Verify(key()) &&
           VerifyField<int32_t>(verifier, 6 /* semantic */) &&
           VerifyField<int32_t>(verifier, 8 /* index */) &&
           VerifyField<int32_t>(verifier, 10 /* type */) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 12 /* value */) &&
           verifier.Verify(value()) &&
           verifier.EndTable();
  }
};

struct materialpropertyBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_key(flatbuffers::Offset<flatbuffers::String> key) { fbb_.AddOffset(4, key); }
  void add_semantic(int32_t semantic) { fbb_.AddElement<int32_t>(6, semantic, 0); }
  void add_index(int32_t index) { fbb_.AddElement<int32_t>(8, index, 0); }
  void add_type(int32_t type) { fbb_.AddElement<int32_t>(10, type, 0); }
  void add_value(flatbuffers::Offset<flatbuffers::String> value) { fbb_.AddOffset(12, value); }
  materialpropertyBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  materialpropertyBuilder &operator=(const materialpropertyBuilder &);
  flatbuffers::Offset<materialproperty> Finish() {
    auto o = flatbuffers::Offset<materialproperty>(fbb_.EndTable(start_, 5));
    return o;
  }
};

inline flatbuffers::Offset<materialproperty> Creatematerialproperty(flatbuffers::FlatBufferBuilder &_fbb,
   flatbuffers::Offset<flatbuffers::String> key = 0,
   int32_t semantic = 0,
   int32_t index = 0,
   int32_t type = 0,
   flatbuffers::Offset<flatbuffers::String> value = 0) {
  materialpropertyBuilder builder_(_fbb);
  builder_.add_value(value);
  builder_.add_type(type);
  builder_.add_index(index);
  builder_.add_semantic(semantic);
  builder_.add_key(key);
  return builder_.Finish();
}

struct material FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  const flatbuffers::Vector<flatbuffers::Offset<materialproperty>> *properties() const { return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<materialproperty>> *>(4); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 4 /* properties */) &&
           verifier.Verify(properties()) &&
           verifier.VerifyVectorOfTables(properties()) &&
           verifier.EndTable();
  }
};

struct materialBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_properties(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<materialproperty>>> properties) { fbb_.AddOffset(4, properties); }
  materialBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  materialBuilder &operator=(const materialBuilder &);
  flatbuffers::Offset<material> Finish() {
    auto o = flatbuffers::Offset<material>(fbb_.EndTable(start_, 1));
    return o;
  }
};

inline flatbuffers::Offset<material> Creatematerial(flatbuffers::FlatBufferBuilder &_fbb,
   flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<materialproperty>>> properties = 0) {
  materialBuilder builder_(_fbb);
  builder_.add_properties(properties);
  return builder_.Finish();
}

///Animations
struct positionkey FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  float frame() const { return GetField<float>(4, 0); }
  const flatbuffers::Vector<float> *vec3() const { return GetPointer<const flatbuffers::Vector<float> *>(6); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<float>(verifier, 4 /* frame */) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 6 /* vec3 */) &&
           verifier.Verify(vec3()) &&
           verifier.EndTable();
  }
};

struct positionkeyBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_frame(float frame) { fbb_.AddElement<float>(4, frame, 0); }
  void add_vec3(flatbuffers::Offset<flatbuffers::Vector<float>> vec3) { fbb_.AddOffset(6, vec3); }
  positionkeyBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  positionkeyBuilder &operator=(const positionkeyBuilder &);
  flatbuffers::Offset<positionkey> Finish() {
    auto o = flatbuffers::Offset<positionkey>(fbb_.EndTable(start_, 2));
    return o;
  }
};

inline flatbuffers::Offset<positionkey> Createpositionkey(flatbuffers::FlatBufferBuilder &_fbb,
   float frame = 0,
   flatbuffers::Offset<flatbuffers::Vector<float>> vec3 = 0) {
  positionkeyBuilder builder_(_fbb);
  builder_.add_vec3(vec3);
  builder_.add_frame(frame);
  return builder_.Finish();
}

struct rotationkey FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  float frame() const { return GetField<float>(4, 0); }
  const flatbuffers::Vector<float> *vec4() const { return GetPointer<const flatbuffers::Vector<float> *>(6); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<float>(verifier, 4 /* frame */) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 6 /* vec4 */) &&
           verifier.Verify(vec4()) &&
           verifier.EndTable();
  }
};

struct rotationkeyBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_frame(float frame) { fbb_.AddElement<float>(4, frame, 0); }
  void add_vec4(flatbuffers::Offset<flatbuffers::Vector<float>> vec4) { fbb_.AddOffset(6, vec4); }
  rotationkeyBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  rotationkeyBuilder &operator=(const rotationkeyBuilder &);
  flatbuffers::Offset<rotationkey> Finish() {
    auto o = flatbuffers::Offset<rotationkey>(fbb_.EndTable(start_, 2));
    return o;
  }
};

inline flatbuffers::Offset<rotationkey> Createrotationkey(flatbuffers::FlatBufferBuilder &_fbb,
   float frame = 0,
   flatbuffers::Offset<flatbuffers::Vector<float>> vec4 = 0) {
  rotationkeyBuilder builder_(_fbb);
  builder_.add_vec4(vec4);
  builder_.add_frame(frame);
  return builder_.Finish();
}

struct scalingkey FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  float frame() const { return GetField<float>(4, 0); }
  const flatbuffers::Vector<float> *vec3() const { return GetPointer<const flatbuffers::Vector<float> *>(6); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<float>(verifier, 4 /* frame */) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 6 /* vec3 */) &&
           verifier.Verify(vec3()) &&
           verifier.EndTable();
  }
};

struct scalingkeyBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_frame(float frame) { fbb_.AddElement<float>(4, frame, 0); }
  void add_vec3(flatbuffers::Offset<flatbuffers::Vector<float>> vec3) { fbb_.AddOffset(6, vec3); }
  scalingkeyBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  scalingkeyBuilder &operator=(const scalingkeyBuilder &);
  flatbuffers::Offset<scalingkey> Finish() {
    auto o = flatbuffers::Offset<scalingkey>(fbb_.EndTable(start_, 2));
    return o;
  }
};

inline flatbuffers::Offset<scalingkey> Createscalingkey(flatbuffers::FlatBufferBuilder &_fbb,
   float frame = 0,
   flatbuffers::Offset<flatbuffers::Vector<float>> vec3 = 0) {
  scalingkeyBuilder builder_(_fbb);
  builder_.add_vec3(vec3);
  builder_.add_frame(frame);
  return builder_.Finish();
}

struct channel FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  const flatbuffers::String *name() const { return GetPointer<const flatbuffers::String *>(4); }
  int32_t prestate() const { return GetField<int32_t>(6, 0); }
  int32_t poststate() const { return GetField<int32_t>(8, 0); }
  const flatbuffers::Vector<flatbuffers::Offset<positionkey>> *positionkeys() const { return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<positionkey>> *>(10); }
  const flatbuffers::Vector<flatbuffers::Offset<rotationkey>> *rotationkeys() const { return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<rotationkey>> *>(12); }
  const flatbuffers::Vector<flatbuffers::Offset<scalingkey>> *scalingkeys() const { return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<scalingkey>> *>(14); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 4 /* name */) &&
           verifier.Verify(name()) &&
           VerifyField<int32_t>(verifier, 6 /* prestate */) &&
           VerifyField<int32_t>(verifier, 8 /* poststate */) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 10 /* positionkeys */) &&
           verifier.Verify(positionkeys()) &&
           verifier.VerifyVectorOfTables(positionkeys()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 12 /* rotationkeys */) &&
           verifier.Verify(rotationkeys()) &&
           verifier.VerifyVectorOfTables(rotationkeys()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 14 /* scalingkeys */) &&
           verifier.Verify(scalingkeys()) &&
           verifier.VerifyVectorOfTables(scalingkeys()) &&
           verifier.EndTable();
  }
};

struct channelBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_name(flatbuffers::Offset<flatbuffers::String> name) { fbb_.AddOffset(4, name); }
  void add_prestate(int32_t prestate) { fbb_.AddElement<int32_t>(6, prestate, 0); }
  void add_poststate(int32_t poststate) { fbb_.AddElement<int32_t>(8, poststate, 0); }
  void add_positionkeys(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<positionkey>>> positionkeys) { fbb_.AddOffset(10, positionkeys); }
  void add_rotationkeys(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<rotationkey>>> rotationkeys) { fbb_.AddOffset(12, rotationkeys); }
  void add_scalingkeys(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<scalingkey>>> scalingkeys) { fbb_.AddOffset(14, scalingkeys); }
  channelBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  channelBuilder &operator=(const channelBuilder &);
  flatbuffers::Offset<channel> Finish() {
    auto o = flatbuffers::Offset<channel>(fbb_.EndTable(start_, 6));
    return o;
  }
};

inline flatbuffers::Offset<channel> Createchannel(flatbuffers::FlatBufferBuilder &_fbb,
   flatbuffers::Offset<flatbuffers::String> name = 0,
   int32_t prestate = 0,
   int32_t poststate = 0,
   flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<positionkey>>> positionkeys = 0,
   flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<rotationkey>>> rotationkeys = 0,
   flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<scalingkey>>> scalingkeys = 0) {
  channelBuilder builder_(_fbb);
  builder_.add_scalingkeys(scalingkeys);
  builder_.add_rotationkeys(rotationkeys);
  builder_.add_positionkeys(positionkeys);
  builder_.add_poststate(poststate);
  builder_.add_prestate(prestate);
  builder_.add_name(name);
  return builder_.Finish();
}

struct animation FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  const flatbuffers::String *name() const { return GetPointer<const flatbuffers::String *>(4); }
  float tickspersecond() const { return GetField<float>(6, 0); }
  float duration() const { return GetField<float>(8, 0); }
  const flatbuffers::Vector<flatbuffers::Offset<channel>> *channels() const { return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<channel>> *>(10); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 4 /* name */) &&
           verifier.Verify(name()) &&
           VerifyField<float>(verifier, 6 /* tickspersecond */) &&
           VerifyField<float>(verifier, 8 /* duration */) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 10 /* channels */) &&
           verifier.Verify(channels()) &&
           verifier.VerifyVectorOfTables(channels()) &&
           verifier.EndTable();
  }
};

struct animationBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_name(flatbuffers::Offset<flatbuffers::String> name) { fbb_.AddOffset(4, name); }
  void add_tickspersecond(float tickspersecond) { fbb_.AddElement<float>(6, tickspersecond, 0); }
  void add_duration(float duration) { fbb_.AddElement<float>(8, duration, 0); }
  void add_channels(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<channel>>> channels) { fbb_.AddOffset(10, channels); }
  animationBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  animationBuilder &operator=(const animationBuilder &);
  flatbuffers::Offset<animation> Finish() {
    auto o = flatbuffers::Offset<animation>(fbb_.EndTable(start_, 4));
    return o;
  }
};

inline flatbuffers::Offset<animation> Createanimation(flatbuffers::FlatBufferBuilder &_fbb,
   flatbuffers::Offset<flatbuffers::String> name = 0,
   float tickspersecond = 0,
   float duration = 0,
   flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<channel>>> channels = 0) {
  animationBuilder builder_(_fbb);
  builder_.add_channels(channels);
  builder_.add_duration(duration);
  builder_.add_tickspersecond(tickspersecond);
  builder_.add_name(name);
  return builder_.Finish();
}

struct rn FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  const flatbuffers::String *name() const { return GetPointer<const flatbuffers::String *>(4); }
  const flatbuffers::Vector<float> *transformation() const { return GetPointer<const flatbuffers::Vector<float> *>(6); }
  const flatbuffers::Vector<int32_t> *meshesId() const { return GetPointer<const flatbuffers::Vector<int32_t> *>(8); }
  const flatbuffers::Vector<flatbuffers::Offset<child>> *children() const { return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<child>> *>(10); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 4 /* name */) &&
           verifier.Verify(name()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 6 /* transformation */) &&
           verifier.Verify(transformation()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 8 /* meshesId */) &&
           verifier.Verify(meshesId()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 10 /* children */) &&
           verifier.Verify(children()) &&
           verifier.VerifyVectorOfTables(children()) &&
           verifier.EndTable();
  }
};

struct rnBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_name(flatbuffers::Offset<flatbuffers::String> name) { fbb_.AddOffset(4, name); }
  void add_transformation(flatbuffers::Offset<flatbuffers::Vector<float>> transformation) { fbb_.AddOffset(6, transformation); }
  void add_meshesId(flatbuffers::Offset<flatbuffers::Vector<int32_t>> meshesId) { fbb_.AddOffset(8, meshesId); }
  void add_children(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<child>>> children) { fbb_.AddOffset(10, children); }
  rnBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  rnBuilder &operator=(const rnBuilder &);
  flatbuffers::Offset<rn> Finish() {
    auto o = flatbuffers::Offset<rn>(fbb_.EndTable(start_, 4));
    return o;
  }
};

inline flatbuffers::Offset<rn> Creatern(flatbuffers::FlatBufferBuilder &_fbb,
   flatbuffers::Offset<flatbuffers::String> name = 0,
   flatbuffers::Offset<flatbuffers::Vector<float>> transformation = 0,
   flatbuffers::Offset<flatbuffers::Vector<int32_t>> meshesId = 0,
   flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<child>>> children = 0) {
  rnBuilder builder_(_fbb);
  builder_.add_children(children);
  builder_.add_meshesId(meshesId);
  builder_.add_transformation(transformation);
  builder_.add_name(name);
  return builder_.Finish();
}

struct header FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  const flatbuffers::String *format() const { return GetPointer<const flatbuffers::String *>(4); }
  int32_t version() const { return GetField<int32_t>(6, 0); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 4 /* format */) &&
           verifier.Verify(format()) &&
           VerifyField<int32_t>(verifier, 6 /* version */) &&
           verifier.EndTable();
  }
};

struct headerBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_format(flatbuffers::Offset<flatbuffers::String> format) { fbb_.AddOffset(4, format); }
  void add_version(int32_t version) { fbb_.AddElement<int32_t>(6, version, 0); }
  headerBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  headerBuilder &operator=(const headerBuilder &);
  flatbuffers::Offset<header> Finish() {
    auto o = flatbuffers::Offset<header>(fbb_.EndTable(start_, 2));
    return o;
  }
};

inline flatbuffers::Offset<header> Createheader(flatbuffers::FlatBufferBuilder &_fbb,
   flatbuffers::Offset<flatbuffers::String> format = 0,
   int32_t version = 0) {
  headerBuilder builder_(_fbb);
  builder_.add_version(version);
  builder_.add_format(format);
  return builder_.Finish();
}

struct FBMesh FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  const header *metadata() const { return GetPointer<const header *>(4); }
  const rn *rootnode() const { return GetPointer<const rn *>(6); }
  int32_t flags() const { return GetField<int32_t>(8, 0); }
  const flatbuffers::Vector<flatbuffers::Offset<mesh>> *meshes() const { return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<mesh>> *>(10); }
  const flatbuffers::Vector<flatbuffers::Offset<material>> *materials() const { return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<material>> *>(12); }
  const flatbuffers::Vector<flatbuffers::Offset<animation>> *animations() const { return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<animation>> *>(14); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 4 /* metadata */) &&
           verifier.VerifyTable(metadata()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 6 /* rootnode */) &&
           verifier.VerifyTable(rootnode()) &&
           VerifyField<int32_t>(verifier, 8 /* flags */) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 10 /* meshes */) &&
           verifier.Verify(meshes()) &&
           verifier.VerifyVectorOfTables(meshes()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 12 /* materials */) &&
           verifier.Verify(materials()) &&
           verifier.VerifyVectorOfTables(materials()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 14 /* animations */) &&
           verifier.Verify(animations()) &&
           verifier.VerifyVectorOfTables(animations()) &&
           verifier.EndTable();
  }
};

struct FBMeshBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_metadata(flatbuffers::Offset<header> metadata) { fbb_.AddOffset(4, metadata); }
  void add_rootnode(flatbuffers::Offset<rn> rootnode) { fbb_.AddOffset(6, rootnode); }
  void add_flags(int32_t flags) { fbb_.AddElement<int32_t>(8, flags, 0); }
  void add_meshes(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<mesh>>> meshes) { fbb_.AddOffset(10, meshes); }
  void add_materials(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<material>>> materials) { fbb_.AddOffset(12, materials); }
  void add_animations(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<animation>>> animations) { fbb_.AddOffset(14, animations); }
  FBMeshBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  FBMeshBuilder &operator=(const FBMeshBuilder &);
  flatbuffers::Offset<FBMesh> Finish() {
    auto o = flatbuffers::Offset<FBMesh>(fbb_.EndTable(start_, 6));
    return o;
  }
};

inline flatbuffers::Offset<FBMesh> CreateFBMesh(flatbuffers::FlatBufferBuilder &_fbb,
   flatbuffers::Offset<header> metadata = 0,
   flatbuffers::Offset<rn> rootnode = 0,
   int32_t flags = 0,
   flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<mesh>>> meshes = 0,
   flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<material>>> materials = 0,
   flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<animation>>> animations = 0) {
  FBMeshBuilder builder_(_fbb);
  builder_.add_animations(animations);
  builder_.add_materials(materials);
  builder_.add_meshes(meshes);
  builder_.add_flags(flags);
  builder_.add_rootnode(rootnode);
  builder_.add_metadata(metadata);
  return builder_.Finish();
}

inline const FBMesh *GetFBMesh(const void *buf) { return flatbuffers::GetRoot<FBMesh>(buf); }

inline bool VerifyFBMeshBuffer(flatbuffers::Verifier &verifier) { return verifier.VerifyBuffer<FBMesh>(); }

inline void FinishFBMeshBuffer(flatbuffers::FlatBufferBuilder &fbb, flatbuffers::Offset<FBMesh> root) { fbb.Finish(root); }


#endif  // FLATBUFFERS_GENERATED_XCMESHJSON_H_