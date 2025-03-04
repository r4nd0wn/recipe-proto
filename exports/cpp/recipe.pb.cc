// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: recipe.proto
// Protobuf C++ Version: 5.29.3

#include "recipe.pb.h"

#include <algorithm>
#include <type_traits>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/generated_message_tctable_impl.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;
namespace recipe {

inline constexpr Ingredience::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : name_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        unit_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        amount_{0},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR Ingredience::Ingredience(::_pbi::ConstantInitialized)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(_class_data_.base()),
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(),
#endif  // PROTOBUF_CUSTOM_VTABLE
      _impl_(::_pbi::ConstantInitialized()) {
}
struct IngredienceDefaultTypeInternal {
  PROTOBUF_CONSTEXPR IngredienceDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~IngredienceDefaultTypeInternal() {}
  union {
    Ingredience _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 IngredienceDefaultTypeInternal _Ingredience_default_instance_;

inline constexpr Recipe::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : ingrediences_{},
        instructions_{},
        portions_{0u},
        active_time_{0u},
        passive_time_{0u},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR Recipe::Recipe(::_pbi::ConstantInitialized)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(_class_data_.base()),
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(),
#endif  // PROTOBUF_CUSTOM_VTABLE
      _impl_(::_pbi::ConstantInitialized()) {
}
struct RecipeDefaultTypeInternal {
  PROTOBUF_CONSTEXPR RecipeDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~RecipeDefaultTypeInternal() {}
  union {
    Recipe _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 RecipeDefaultTypeInternal _Recipe_default_instance_;
}  // namespace recipe
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_recipe_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_recipe_2eproto = nullptr;
const ::uint32_t
    TableStruct_recipe_2eproto::offsets[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
        protodesc_cold) = {
        ~0u,  // no _has_bits_
        PROTOBUF_FIELD_OFFSET(::recipe::Ingredience, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::recipe::Ingredience, _impl_.amount_),
        PROTOBUF_FIELD_OFFSET(::recipe::Ingredience, _impl_.name_),
        PROTOBUF_FIELD_OFFSET(::recipe::Ingredience, _impl_.unit_),
        ~0u,  // no _has_bits_
        PROTOBUF_FIELD_OFFSET(::recipe::Recipe, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::recipe::Recipe, _impl_.portions_),
        PROTOBUF_FIELD_OFFSET(::recipe::Recipe, _impl_.active_time_),
        PROTOBUF_FIELD_OFFSET(::recipe::Recipe, _impl_.passive_time_),
        PROTOBUF_FIELD_OFFSET(::recipe::Recipe, _impl_.ingrediences_),
        PROTOBUF_FIELD_OFFSET(::recipe::Recipe, _impl_.instructions_),
};

static const ::_pbi::MigrationSchema
    schemas[] ABSL_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::recipe::Ingredience)},
        {11, -1, -1, sizeof(::recipe::Recipe)},
};
static const ::_pb::Message* const file_default_instances[] = {
    &::recipe::_Ingredience_default_instance_._instance,
    &::recipe::_Recipe_default_instance_._instance,
};
const char descriptor_table_protodef_recipe_2eproto[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
    protodesc_cold) = {
    "\n\014recipe.proto\022\006recipe\"9\n\013Ingredience\022\016\n"
    "\006amount\030\001 \001(\002\022\014\n\004name\030\002 \001(\t\022\014\n\004unit\030\003 \001("
    "\t\"\206\001\n\006Recipe\022\020\n\010portions\030\001 \001(\r\022\023\n\013active"
    "_time\030\002 \001(\r\022\024\n\014passive_time\030\003 \001(\r\022)\n\014ing"
    "rediences\030\004 \003(\0132\023.recipe.Ingredience\022\024\n\014"
    "instructions\030\005 \003(\tb\006proto3"
};
static ::absl::once_flag descriptor_table_recipe_2eproto_once;
PROTOBUF_CONSTINIT const ::_pbi::DescriptorTable descriptor_table_recipe_2eproto = {
    false,
    false,
    226,
    descriptor_table_protodef_recipe_2eproto,
    "recipe.proto",
    &descriptor_table_recipe_2eproto_once,
    nullptr,
    0,
    2,
    schemas,
    file_default_instances,
    TableStruct_recipe_2eproto::offsets,
    file_level_enum_descriptors_recipe_2eproto,
    file_level_service_descriptors_recipe_2eproto,
};
namespace recipe {
// ===================================================================

class Ingredience::_Internal {
 public:
};

Ingredience::Ingredience(::google::protobuf::Arena* arena)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:recipe.Ingredience)
}
inline PROTOBUF_NDEBUG_INLINE Ingredience::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from, const ::recipe::Ingredience& from_msg)
      : name_(arena, from.name_),
        unit_(arena, from.unit_),
        _cached_size_{0} {}

Ingredience::Ingredience(
    ::google::protobuf::Arena* arena,
    const Ingredience& from)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  Ingredience* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);
  _impl_.amount_ = from._impl_.amount_;

  // @@protoc_insertion_point(copy_constructor:recipe.Ingredience)
}
inline PROTOBUF_NDEBUG_INLINE Ingredience::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : name_(arena),
        unit_(arena),
        _cached_size_{0} {}

inline void Ingredience::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  _impl_.amount_ = {};
}
Ingredience::~Ingredience() {
  // @@protoc_insertion_point(destructor:recipe.Ingredience)
  SharedDtor(*this);
}
inline void Ingredience::SharedDtor(MessageLite& self) {
  Ingredience& this_ = static_cast<Ingredience&>(self);
  this_._internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  ABSL_DCHECK(this_.GetArena() == nullptr);
  this_._impl_.name_.Destroy();
  this_._impl_.unit_.Destroy();
  this_._impl_.~Impl_();
}

inline void* Ingredience::PlacementNew_(const void*, void* mem,
                                        ::google::protobuf::Arena* arena) {
  return ::new (mem) Ingredience(arena);
}
constexpr auto Ingredience::InternalNewImpl_() {
  return ::google::protobuf::internal::MessageCreator::CopyInit(sizeof(Ingredience),
                                            alignof(Ingredience));
}
PROTOBUF_CONSTINIT
PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::google::protobuf::internal::ClassDataFull Ingredience::_class_data_ = {
    ::google::protobuf::internal::ClassData{
        &_Ingredience_default_instance_._instance,
        &_table_.header,
        nullptr,  // OnDemandRegisterArenaDtor
        nullptr,  // IsInitialized
        &Ingredience::MergeImpl,
        ::google::protobuf::Message::GetNewImpl<Ingredience>(),
#if defined(PROTOBUF_CUSTOM_VTABLE)
        &Ingredience::SharedDtor,
        ::google::protobuf::Message::GetClearImpl<Ingredience>(), &Ingredience::ByteSizeLong,
            &Ingredience::_InternalSerialize,
#endif  // PROTOBUF_CUSTOM_VTABLE
        PROTOBUF_FIELD_OFFSET(Ingredience, _impl_._cached_size_),
        false,
    },
    &Ingredience::kDescriptorMethods,
    &descriptor_table_recipe_2eproto,
    nullptr,  // tracker
};
const ::google::protobuf::internal::ClassData* Ingredience::GetClassData() const {
  ::google::protobuf::internal::PrefetchToLocalCache(&_class_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_class_data_.tc_table);
  return _class_data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<2, 3, 0, 35, 2> Ingredience::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    3, 24,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967288,  // skipmap
    offsetof(decltype(_table_), field_entries),
    3,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    _class_data_.base(),
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::recipe::Ingredience>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    {::_pbi::TcParser::MiniParse, {}},
    // float amount = 1;
    {::_pbi::TcParser::FastF32S1,
     {13, 63, 0, PROTOBUF_FIELD_OFFSET(Ingredience, _impl_.amount_)}},
    // string name = 2;
    {::_pbi::TcParser::FastUS1,
     {18, 63, 0, PROTOBUF_FIELD_OFFSET(Ingredience, _impl_.name_)}},
    // string unit = 3;
    {::_pbi::TcParser::FastUS1,
     {26, 63, 0, PROTOBUF_FIELD_OFFSET(Ingredience, _impl_.unit_)}},
  }}, {{
    65535, 65535
  }}, {{
    // float amount = 1;
    {PROTOBUF_FIELD_OFFSET(Ingredience, _impl_.amount_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kFloat)},
    // string name = 2;
    {PROTOBUF_FIELD_OFFSET(Ingredience, _impl_.name_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // string unit = 3;
    {PROTOBUF_FIELD_OFFSET(Ingredience, _impl_.unit_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
  }},
  // no aux_entries
  {{
    "\22\0\4\4\0\0\0\0"
    "recipe.Ingredience"
    "name"
    "unit"
  }},
};

PROTOBUF_NOINLINE void Ingredience::Clear() {
// @@protoc_insertion_point(message_clear_start:recipe.Ingredience)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.name_.ClearToEmpty();
  _impl_.unit_.ClearToEmpty();
  _impl_.amount_ = 0;
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::uint8_t* Ingredience::_InternalSerialize(
            const MessageLite& base, ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) {
          const Ingredience& this_ = static_cast<const Ingredience&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::uint8_t* Ingredience::_InternalSerialize(
            ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) const {
          const Ingredience& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(serialize_to_array_start:recipe.Ingredience)
          ::uint32_t cached_has_bits = 0;
          (void)cached_has_bits;

          // float amount = 1;
          if (::absl::bit_cast<::uint32_t>(this_._internal_amount()) != 0) {
            target = stream->EnsureSpace(target);
            target = ::_pbi::WireFormatLite::WriteFloatToArray(
                1, this_._internal_amount(), target);
          }

          // string name = 2;
          if (!this_._internal_name().empty()) {
            const std::string& _s = this_._internal_name();
            ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "recipe.Ingredience.name");
            target = stream->WriteStringMaybeAliased(2, _s, target);
          }

          // string unit = 3;
          if (!this_._internal_unit().empty()) {
            const std::string& _s = this_._internal_unit();
            ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "recipe.Ingredience.unit");
            target = stream->WriteStringMaybeAliased(3, _s, target);
          }

          if (PROTOBUF_PREDICT_FALSE(this_._internal_metadata_.have_unknown_fields())) {
            target =
                ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
                    this_._internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
          }
          // @@protoc_insertion_point(serialize_to_array_end:recipe.Ingredience)
          return target;
        }

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::size_t Ingredience::ByteSizeLong(const MessageLite& base) {
          const Ingredience& this_ = static_cast<const Ingredience&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::size_t Ingredience::ByteSizeLong() const {
          const Ingredience& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(message_byte_size_start:recipe.Ingredience)
          ::size_t total_size = 0;

          ::uint32_t cached_has_bits = 0;
          // Prevent compiler warnings about cached_has_bits being unused
          (void)cached_has_bits;

          ::_pbi::Prefetch5LinesFrom7Lines(&this_);
           {
            // string name = 2;
            if (!this_._internal_name().empty()) {
              total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                              this_._internal_name());
            }
            // string unit = 3;
            if (!this_._internal_unit().empty()) {
              total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                              this_._internal_unit());
            }
            // float amount = 1;
            if (::absl::bit_cast<::uint32_t>(this_._internal_amount()) != 0) {
              total_size += 5;
            }
          }
          return this_.MaybeComputeUnknownFieldsSize(total_size,
                                                     &this_._impl_._cached_size_);
        }

void Ingredience::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<Ingredience*>(&to_msg);
  auto& from = static_cast<const Ingredience&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:recipe.Ingredience)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_name().empty()) {
    _this->_internal_set_name(from._internal_name());
  }
  if (!from._internal_unit().empty()) {
    _this->_internal_set_unit(from._internal_unit());
  }
  if (::absl::bit_cast<::uint32_t>(from._internal_amount()) != 0) {
    _this->_impl_.amount_ = from._impl_.amount_;
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void Ingredience::CopyFrom(const Ingredience& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:recipe.Ingredience)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void Ingredience::InternalSwap(Ingredience* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.name_, &other->_impl_.name_, arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.unit_, &other->_impl_.unit_, arena);
        swap(_impl_.amount_, other->_impl_.amount_);
}

::google::protobuf::Metadata Ingredience::GetMetadata() const {
  return ::google::protobuf::Message::GetMetadataImpl(GetClassData()->full());
}
// ===================================================================

class Recipe::_Internal {
 public:
};

Recipe::Recipe(::google::protobuf::Arena* arena)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:recipe.Recipe)
}
inline PROTOBUF_NDEBUG_INLINE Recipe::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from, const ::recipe::Recipe& from_msg)
      : ingrediences_{visibility, arena, from.ingrediences_},
        instructions_{visibility, arena, from.instructions_},
        _cached_size_{0} {}

Recipe::Recipe(
    ::google::protobuf::Arena* arena,
    const Recipe& from)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  Recipe* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);
  ::memcpy(reinterpret_cast<char *>(&_impl_) +
               offsetof(Impl_, portions_),
           reinterpret_cast<const char *>(&from._impl_) +
               offsetof(Impl_, portions_),
           offsetof(Impl_, passive_time_) -
               offsetof(Impl_, portions_) +
               sizeof(Impl_::passive_time_));

  // @@protoc_insertion_point(copy_constructor:recipe.Recipe)
}
inline PROTOBUF_NDEBUG_INLINE Recipe::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : ingrediences_{visibility, arena},
        instructions_{visibility, arena},
        _cached_size_{0} {}

inline void Recipe::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  ::memset(reinterpret_cast<char *>(&_impl_) +
               offsetof(Impl_, portions_),
           0,
           offsetof(Impl_, passive_time_) -
               offsetof(Impl_, portions_) +
               sizeof(Impl_::passive_time_));
}
Recipe::~Recipe() {
  // @@protoc_insertion_point(destructor:recipe.Recipe)
  SharedDtor(*this);
}
inline void Recipe::SharedDtor(MessageLite& self) {
  Recipe& this_ = static_cast<Recipe&>(self);
  this_._internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  ABSL_DCHECK(this_.GetArena() == nullptr);
  this_._impl_.~Impl_();
}

inline void* Recipe::PlacementNew_(const void*, void* mem,
                                        ::google::protobuf::Arena* arena) {
  return ::new (mem) Recipe(arena);
}
constexpr auto Recipe::InternalNewImpl_() {
  constexpr auto arena_bits = ::google::protobuf::internal::EncodePlacementArenaOffsets({
      PROTOBUF_FIELD_OFFSET(Recipe, _impl_.ingrediences_) +
          decltype(Recipe::_impl_.ingrediences_)::
              InternalGetArenaOffset(
                  ::google::protobuf::Message::internal_visibility()),
      PROTOBUF_FIELD_OFFSET(Recipe, _impl_.instructions_) +
          decltype(Recipe::_impl_.instructions_)::
              InternalGetArenaOffset(
                  ::google::protobuf::Message::internal_visibility()),
  });
  if (arena_bits.has_value()) {
    return ::google::protobuf::internal::MessageCreator::ZeroInit(
        sizeof(Recipe), alignof(Recipe), *arena_bits);
  } else {
    return ::google::protobuf::internal::MessageCreator(&Recipe::PlacementNew_,
                                 sizeof(Recipe),
                                 alignof(Recipe));
  }
}
PROTOBUF_CONSTINIT
PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::google::protobuf::internal::ClassDataFull Recipe::_class_data_ = {
    ::google::protobuf::internal::ClassData{
        &_Recipe_default_instance_._instance,
        &_table_.header,
        nullptr,  // OnDemandRegisterArenaDtor
        nullptr,  // IsInitialized
        &Recipe::MergeImpl,
        ::google::protobuf::Message::GetNewImpl<Recipe>(),
#if defined(PROTOBUF_CUSTOM_VTABLE)
        &Recipe::SharedDtor,
        ::google::protobuf::Message::GetClearImpl<Recipe>(), &Recipe::ByteSizeLong,
            &Recipe::_InternalSerialize,
#endif  // PROTOBUF_CUSTOM_VTABLE
        PROTOBUF_FIELD_OFFSET(Recipe, _impl_._cached_size_),
        false,
    },
    &Recipe::kDescriptorMethods,
    &descriptor_table_recipe_2eproto,
    nullptr,  // tracker
};
const ::google::protobuf::internal::ClassData* Recipe::GetClassData() const {
  ::google::protobuf::internal::PrefetchToLocalCache(&_class_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_class_data_.tc_table);
  return _class_data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<3, 5, 1, 34, 2> Recipe::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    5, 56,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967264,  // skipmap
    offsetof(decltype(_table_), field_entries),
    5,  // num_field_entries
    1,  // num_aux_entries
    offsetof(decltype(_table_), aux_entries),
    _class_data_.base(),
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::recipe::Recipe>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    {::_pbi::TcParser::MiniParse, {}},
    // uint32 portions = 1;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(Recipe, _impl_.portions_), 63>(),
     {8, 63, 0, PROTOBUF_FIELD_OFFSET(Recipe, _impl_.portions_)}},
    // uint32 active_time = 2;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(Recipe, _impl_.active_time_), 63>(),
     {16, 63, 0, PROTOBUF_FIELD_OFFSET(Recipe, _impl_.active_time_)}},
    // uint32 passive_time = 3;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(Recipe, _impl_.passive_time_), 63>(),
     {24, 63, 0, PROTOBUF_FIELD_OFFSET(Recipe, _impl_.passive_time_)}},
    // repeated .recipe.Ingredience ingrediences = 4;
    {::_pbi::TcParser::FastMtR1,
     {34, 63, 0, PROTOBUF_FIELD_OFFSET(Recipe, _impl_.ingrediences_)}},
    // repeated string instructions = 5;
    {::_pbi::TcParser::FastUR1,
     {42, 63, 0, PROTOBUF_FIELD_OFFSET(Recipe, _impl_.instructions_)}},
    {::_pbi::TcParser::MiniParse, {}},
    {::_pbi::TcParser::MiniParse, {}},
  }}, {{
    65535, 65535
  }}, {{
    // uint32 portions = 1;
    {PROTOBUF_FIELD_OFFSET(Recipe, _impl_.portions_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUInt32)},
    // uint32 active_time = 2;
    {PROTOBUF_FIELD_OFFSET(Recipe, _impl_.active_time_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUInt32)},
    // uint32 passive_time = 3;
    {PROTOBUF_FIELD_OFFSET(Recipe, _impl_.passive_time_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUInt32)},
    // repeated .recipe.Ingredience ingrediences = 4;
    {PROTOBUF_FIELD_OFFSET(Recipe, _impl_.ingrediences_), 0, 0,
    (0 | ::_fl::kFcRepeated | ::_fl::kMessage | ::_fl::kTvTable)},
    // repeated string instructions = 5;
    {PROTOBUF_FIELD_OFFSET(Recipe, _impl_.instructions_), 0, 0,
    (0 | ::_fl::kFcRepeated | ::_fl::kUtf8String | ::_fl::kRepSString)},
  }}, {{
    {::_pbi::TcParser::GetTable<::recipe::Ingredience>()},
  }}, {{
    "\15\0\0\0\0\14\0\0"
    "recipe.Recipe"
    "instructions"
  }},
};

PROTOBUF_NOINLINE void Recipe::Clear() {
// @@protoc_insertion_point(message_clear_start:recipe.Recipe)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.ingrediences_.Clear();
  _impl_.instructions_.Clear();
  ::memset(&_impl_.portions_, 0, static_cast<::size_t>(
      reinterpret_cast<char*>(&_impl_.passive_time_) -
      reinterpret_cast<char*>(&_impl_.portions_)) + sizeof(_impl_.passive_time_));
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::uint8_t* Recipe::_InternalSerialize(
            const MessageLite& base, ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) {
          const Recipe& this_ = static_cast<const Recipe&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::uint8_t* Recipe::_InternalSerialize(
            ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) const {
          const Recipe& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(serialize_to_array_start:recipe.Recipe)
          ::uint32_t cached_has_bits = 0;
          (void)cached_has_bits;

          // uint32 portions = 1;
          if (this_._internal_portions() != 0) {
            target = stream->EnsureSpace(target);
            target = ::_pbi::WireFormatLite::WriteUInt32ToArray(
                1, this_._internal_portions(), target);
          }

          // uint32 active_time = 2;
          if (this_._internal_active_time() != 0) {
            target = stream->EnsureSpace(target);
            target = ::_pbi::WireFormatLite::WriteUInt32ToArray(
                2, this_._internal_active_time(), target);
          }

          // uint32 passive_time = 3;
          if (this_._internal_passive_time() != 0) {
            target = stream->EnsureSpace(target);
            target = ::_pbi::WireFormatLite::WriteUInt32ToArray(
                3, this_._internal_passive_time(), target);
          }

          // repeated .recipe.Ingredience ingrediences = 4;
          for (unsigned i = 0, n = static_cast<unsigned>(
                                   this_._internal_ingrediences_size());
               i < n; i++) {
            const auto& repfield = this_._internal_ingrediences().Get(i);
            target =
                ::google::protobuf::internal::WireFormatLite::InternalWriteMessage(
                    4, repfield, repfield.GetCachedSize(),
                    target, stream);
          }

          // repeated string instructions = 5;
          for (int i = 0, n = this_._internal_instructions_size(); i < n; ++i) {
            const auto& s = this_._internal_instructions().Get(i);
            ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                s.data(), static_cast<int>(s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "recipe.Recipe.instructions");
            target = stream->WriteString(5, s, target);
          }

          if (PROTOBUF_PREDICT_FALSE(this_._internal_metadata_.have_unknown_fields())) {
            target =
                ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
                    this_._internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
          }
          // @@protoc_insertion_point(serialize_to_array_end:recipe.Recipe)
          return target;
        }

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::size_t Recipe::ByteSizeLong(const MessageLite& base) {
          const Recipe& this_ = static_cast<const Recipe&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::size_t Recipe::ByteSizeLong() const {
          const Recipe& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(message_byte_size_start:recipe.Recipe)
          ::size_t total_size = 0;

          ::uint32_t cached_has_bits = 0;
          // Prevent compiler warnings about cached_has_bits being unused
          (void)cached_has_bits;

          ::_pbi::Prefetch5LinesFrom7Lines(&this_);
           {
            // repeated .recipe.Ingredience ingrediences = 4;
            {
              total_size += 1UL * this_._internal_ingrediences_size();
              for (const auto& msg : this_._internal_ingrediences()) {
                total_size += ::google::protobuf::internal::WireFormatLite::MessageSize(msg);
              }
            }
            // repeated string instructions = 5;
            {
              total_size +=
                  1 * ::google::protobuf::internal::FromIntSize(this_._internal_instructions().size());
              for (int i = 0, n = this_._internal_instructions().size(); i < n; ++i) {
                total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
                    this_._internal_instructions().Get(i));
              }
            }
          }
           {
            // uint32 portions = 1;
            if (this_._internal_portions() != 0) {
              total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(
                  this_._internal_portions());
            }
            // uint32 active_time = 2;
            if (this_._internal_active_time() != 0) {
              total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(
                  this_._internal_active_time());
            }
            // uint32 passive_time = 3;
            if (this_._internal_passive_time() != 0) {
              total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(
                  this_._internal_passive_time());
            }
          }
          return this_.MaybeComputeUnknownFieldsSize(total_size,
                                                     &this_._impl_._cached_size_);
        }

void Recipe::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<Recipe*>(&to_msg);
  auto& from = static_cast<const Recipe&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:recipe.Recipe)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_internal_mutable_ingrediences()->MergeFrom(
      from._internal_ingrediences());
  _this->_internal_mutable_instructions()->MergeFrom(from._internal_instructions());
  if (from._internal_portions() != 0) {
    _this->_impl_.portions_ = from._impl_.portions_;
  }
  if (from._internal_active_time() != 0) {
    _this->_impl_.active_time_ = from._impl_.active_time_;
  }
  if (from._internal_passive_time() != 0) {
    _this->_impl_.passive_time_ = from._impl_.passive_time_;
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void Recipe::CopyFrom(const Recipe& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:recipe.Recipe)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void Recipe::InternalSwap(Recipe* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.ingrediences_.InternalSwap(&other->_impl_.ingrediences_);
  _impl_.instructions_.InternalSwap(&other->_impl_.instructions_);
  ::google::protobuf::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Recipe, _impl_.passive_time_)
      + sizeof(Recipe::_impl_.passive_time_)
      - PROTOBUF_FIELD_OFFSET(Recipe, _impl_.portions_)>(
          reinterpret_cast<char*>(&_impl_.portions_),
          reinterpret_cast<char*>(&other->_impl_.portions_));
}

::google::protobuf::Metadata Recipe::GetMetadata() const {
  return ::google::protobuf::Message::GetMetadataImpl(GetClassData()->full());
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace recipe
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::std::false_type
    _static_init2_ PROTOBUF_UNUSED =
        (::_pbi::AddDescriptors(&descriptor_table_recipe_2eproto),
         ::std::false_type{});
#include "google/protobuf/port_undef.inc"
