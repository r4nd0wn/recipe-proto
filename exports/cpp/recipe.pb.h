// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: recipe.proto
// Protobuf C++ Version: 5.29.3

#ifndef recipe_2eproto_2epb_2eh
#define recipe_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/runtime_version.h"
#if PROTOBUF_VERSION != 5029003
#error "Protobuf C++ gencode is built with an incompatible version of"
#error "Protobuf C++ headers/runtime. See"
#error "https://protobuf.dev/support/cross-version-runtime-guarantee/#cpp"
#endif
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/message_lite.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_recipe_2eproto

namespace google {
namespace protobuf {
namespace internal {
template <typename T>
::absl::string_view GetAnyMessageName();
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_recipe_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_recipe_2eproto;
namespace recipe {
class Ingredience;
struct IngredienceDefaultTypeInternal;
extern IngredienceDefaultTypeInternal _Ingredience_default_instance_;
class Recipe;
struct RecipeDefaultTypeInternal;
extern RecipeDefaultTypeInternal _Recipe_default_instance_;
}  // namespace recipe
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

namespace recipe {

// ===================================================================


// -------------------------------------------------------------------

class Ingredience final : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:recipe.Ingredience) */ {
 public:
  inline Ingredience() : Ingredience(nullptr) {}
  ~Ingredience() PROTOBUF_FINAL;

#if defined(PROTOBUF_CUSTOM_VTABLE)
  void operator delete(Ingredience* msg, std::destroying_delete_t) {
    SharedDtor(*msg);
    ::google::protobuf::internal::SizedDelete(msg, sizeof(Ingredience));
  }
#endif

  template <typename = void>
  explicit PROTOBUF_CONSTEXPR Ingredience(
      ::google::protobuf::internal::ConstantInitialized);

  inline Ingredience(const Ingredience& from) : Ingredience(nullptr, from) {}
  inline Ingredience(Ingredience&& from) noexcept
      : Ingredience(nullptr, std::move(from)) {}
  inline Ingredience& operator=(const Ingredience& from) {
    CopyFrom(from);
    return *this;
  }
  inline Ingredience& operator=(Ingredience&& from) noexcept {
    if (this == &from) return *this;
    if (::google::protobuf::internal::CanMoveWithInternalSwap(GetArena(), from.GetArena())) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Ingredience& default_instance() {
    return *internal_default_instance();
  }
  static inline const Ingredience* internal_default_instance() {
    return reinterpret_cast<const Ingredience*>(
        &_Ingredience_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 0;
  friend void swap(Ingredience& a, Ingredience& b) { a.Swap(&b); }
  inline void Swap(Ingredience* other) {
    if (other == this) return;
    if (::google::protobuf::internal::CanUseInternalSwap(GetArena(), other->GetArena())) {
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Ingredience* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Ingredience* New(::google::protobuf::Arena* arena = nullptr) const {
    return ::google::protobuf::Message::DefaultConstruct<Ingredience>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const Ingredience& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const Ingredience& from) { Ingredience::MergeImpl(*this, from); }

  private:
  static void MergeImpl(
      ::google::protobuf::MessageLite& to_msg,
      const ::google::protobuf::MessageLite& from_msg);

  public:
  bool IsInitialized() const {
    return true;
  }
  ABSL_ATTRIBUTE_REINITIALIZES void Clear() PROTOBUF_FINAL;
  #if defined(PROTOBUF_CUSTOM_VTABLE)
  private:
  static ::size_t ByteSizeLong(const ::google::protobuf::MessageLite& msg);
  static ::uint8_t* _InternalSerialize(
      const MessageLite& msg, ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream);

  public:
  ::size_t ByteSizeLong() const { return ByteSizeLong(*this); }
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const {
    return _InternalSerialize(*this, target, stream);
  }
  #else   // PROTOBUF_CUSTOM_VTABLE
  ::size_t ByteSizeLong() const final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  #endif  // PROTOBUF_CUSTOM_VTABLE
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  static void SharedDtor(MessageLite& self);
  void InternalSwap(Ingredience* other);
 private:
  template <typename T>
  friend ::absl::string_view(
      ::google::protobuf::internal::GetAnyMessageName)();
  static ::absl::string_view FullMessageName() { return "recipe.Ingredience"; }

 protected:
  explicit Ingredience(::google::protobuf::Arena* arena);
  Ingredience(::google::protobuf::Arena* arena, const Ingredience& from);
  Ingredience(::google::protobuf::Arena* arena, Ingredience&& from) noexcept
      : Ingredience(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::internal::ClassData* GetClassData() const PROTOBUF_FINAL;
  static void* PlacementNew_(const void*, void* mem,
                             ::google::protobuf::Arena* arena);
  static constexpr auto InternalNewImpl_();
  static const ::google::protobuf::internal::ClassDataFull _class_data_;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  enum : int {
    kNameFieldNumber = 2,
    kUnitFieldNumber = 3,
    kAmountFieldNumber = 1,
  };
  // string name = 2;
  void clear_name() ;
  const std::string& name() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_name(Arg_&& arg, Args_... args);
  std::string* mutable_name();
  PROTOBUF_NODISCARD std::string* release_name();
  void set_allocated_name(std::string* value);

  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(
      const std::string& value);
  std::string* _internal_mutable_name();

  public:
  // string unit = 3;
  void clear_unit() ;
  const std::string& unit() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_unit(Arg_&& arg, Args_... args);
  std::string* mutable_unit();
  PROTOBUF_NODISCARD std::string* release_unit();
  void set_allocated_unit(std::string* value);

  private:
  const std::string& _internal_unit() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_unit(
      const std::string& value);
  std::string* _internal_mutable_unit();

  public:
  // float amount = 1;
  void clear_amount() ;
  float amount() const;
  void set_amount(float value);

  private:
  float _internal_amount() const;
  void _internal_set_amount(float value);

  public:
  // @@protoc_insertion_point(class_scope:recipe.Ingredience)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      2, 3, 0,
      35, 2>
      _table_;

  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {
    inline explicit constexpr Impl_(
        ::google::protobuf::internal::ConstantInitialized) noexcept;
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena);
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena, const Impl_& from,
                          const Ingredience& from_msg);
    ::google::protobuf::internal::ArenaStringPtr name_;
    ::google::protobuf::internal::ArenaStringPtr unit_;
    float amount_;
    ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_recipe_2eproto;
};
// -------------------------------------------------------------------

class Recipe final : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:recipe.Recipe) */ {
 public:
  inline Recipe() : Recipe(nullptr) {}
  ~Recipe() PROTOBUF_FINAL;

#if defined(PROTOBUF_CUSTOM_VTABLE)
  void operator delete(Recipe* msg, std::destroying_delete_t) {
    SharedDtor(*msg);
    ::google::protobuf::internal::SizedDelete(msg, sizeof(Recipe));
  }
#endif

  template <typename = void>
  explicit PROTOBUF_CONSTEXPR Recipe(
      ::google::protobuf::internal::ConstantInitialized);

  inline Recipe(const Recipe& from) : Recipe(nullptr, from) {}
  inline Recipe(Recipe&& from) noexcept
      : Recipe(nullptr, std::move(from)) {}
  inline Recipe& operator=(const Recipe& from) {
    CopyFrom(from);
    return *this;
  }
  inline Recipe& operator=(Recipe&& from) noexcept {
    if (this == &from) return *this;
    if (::google::protobuf::internal::CanMoveWithInternalSwap(GetArena(), from.GetArena())) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Recipe& default_instance() {
    return *internal_default_instance();
  }
  static inline const Recipe* internal_default_instance() {
    return reinterpret_cast<const Recipe*>(
        &_Recipe_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 1;
  friend void swap(Recipe& a, Recipe& b) { a.Swap(&b); }
  inline void Swap(Recipe* other) {
    if (other == this) return;
    if (::google::protobuf::internal::CanUseInternalSwap(GetArena(), other->GetArena())) {
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Recipe* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Recipe* New(::google::protobuf::Arena* arena = nullptr) const {
    return ::google::protobuf::Message::DefaultConstruct<Recipe>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const Recipe& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const Recipe& from) { Recipe::MergeImpl(*this, from); }

  private:
  static void MergeImpl(
      ::google::protobuf::MessageLite& to_msg,
      const ::google::protobuf::MessageLite& from_msg);

  public:
  bool IsInitialized() const {
    return true;
  }
  ABSL_ATTRIBUTE_REINITIALIZES void Clear() PROTOBUF_FINAL;
  #if defined(PROTOBUF_CUSTOM_VTABLE)
  private:
  static ::size_t ByteSizeLong(const ::google::protobuf::MessageLite& msg);
  static ::uint8_t* _InternalSerialize(
      const MessageLite& msg, ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream);

  public:
  ::size_t ByteSizeLong() const { return ByteSizeLong(*this); }
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const {
    return _InternalSerialize(*this, target, stream);
  }
  #else   // PROTOBUF_CUSTOM_VTABLE
  ::size_t ByteSizeLong() const final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  #endif  // PROTOBUF_CUSTOM_VTABLE
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  static void SharedDtor(MessageLite& self);
  void InternalSwap(Recipe* other);
 private:
  template <typename T>
  friend ::absl::string_view(
      ::google::protobuf::internal::GetAnyMessageName)();
  static ::absl::string_view FullMessageName() { return "recipe.Recipe"; }

 protected:
  explicit Recipe(::google::protobuf::Arena* arena);
  Recipe(::google::protobuf::Arena* arena, const Recipe& from);
  Recipe(::google::protobuf::Arena* arena, Recipe&& from) noexcept
      : Recipe(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::internal::ClassData* GetClassData() const PROTOBUF_FINAL;
  static void* PlacementNew_(const void*, void* mem,
                             ::google::protobuf::Arena* arena);
  static constexpr auto InternalNewImpl_();
  static const ::google::protobuf::internal::ClassDataFull _class_data_;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  enum : int {
    kIngrediencesFieldNumber = 4,
    kJobStepsFieldNumber = 5,
    kPortionsFieldNumber = 1,
    kActiveTimeFieldNumber = 2,
    kPassiveTimeFieldNumber = 3,
  };
  // repeated .recipe.Ingredience ingrediences = 4;
  int ingrediences_size() const;
  private:
  int _internal_ingrediences_size() const;

  public:
  void clear_ingrediences() ;
  ::recipe::Ingredience* mutable_ingrediences(int index);
  ::google::protobuf::RepeatedPtrField<::recipe::Ingredience>* mutable_ingrediences();

  private:
  const ::google::protobuf::RepeatedPtrField<::recipe::Ingredience>& _internal_ingrediences() const;
  ::google::protobuf::RepeatedPtrField<::recipe::Ingredience>* _internal_mutable_ingrediences();
  public:
  const ::recipe::Ingredience& ingrediences(int index) const;
  ::recipe::Ingredience* add_ingrediences();
  const ::google::protobuf::RepeatedPtrField<::recipe::Ingredience>& ingrediences() const;
  // repeated string job_steps = 5;
  int job_steps_size() const;
  private:
  int _internal_job_steps_size() const;

  public:
  void clear_job_steps() ;
  const std::string& job_steps(int index) const;
  std::string* mutable_job_steps(int index);
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_job_steps(int index, Arg_&& value, Args_... args);
  std::string* add_job_steps();
  template <typename Arg_ = const std::string&, typename... Args_>
  void add_job_steps(Arg_&& value, Args_... args);
  const ::google::protobuf::RepeatedPtrField<std::string>& job_steps() const;
  ::google::protobuf::RepeatedPtrField<std::string>* mutable_job_steps();

  private:
  const ::google::protobuf::RepeatedPtrField<std::string>& _internal_job_steps() const;
  ::google::protobuf::RepeatedPtrField<std::string>* _internal_mutable_job_steps();

  public:
  // uint32 portions = 1;
  void clear_portions() ;
  ::uint32_t portions() const;
  void set_portions(::uint32_t value);

  private:
  ::uint32_t _internal_portions() const;
  void _internal_set_portions(::uint32_t value);

  public:
  // uint32 active_time = 2;
  void clear_active_time() ;
  ::uint32_t active_time() const;
  void set_active_time(::uint32_t value);

  private:
  ::uint32_t _internal_active_time() const;
  void _internal_set_active_time(::uint32_t value);

  public:
  // uint32 passive_time = 3;
  void clear_passive_time() ;
  ::uint32_t passive_time() const;
  void set_passive_time(::uint32_t value);

  private:
  ::uint32_t _internal_passive_time() const;
  void _internal_set_passive_time(::uint32_t value);

  public:
  // @@protoc_insertion_point(class_scope:recipe.Recipe)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      3, 5, 1,
      31, 2>
      _table_;

  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {
    inline explicit constexpr Impl_(
        ::google::protobuf::internal::ConstantInitialized) noexcept;
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena);
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena, const Impl_& from,
                          const Recipe& from_msg);
    ::google::protobuf::RepeatedPtrField< ::recipe::Ingredience > ingrediences_;
    ::google::protobuf::RepeatedPtrField<std::string> job_steps_;
    ::uint32_t portions_;
    ::uint32_t active_time_;
    ::uint32_t passive_time_;
    ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_recipe_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// Ingredience

// float amount = 1;
inline void Ingredience::clear_amount() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.amount_ = 0;
}
inline float Ingredience::amount() const {
  // @@protoc_insertion_point(field_get:recipe.Ingredience.amount)
  return _internal_amount();
}
inline void Ingredience::set_amount(float value) {
  _internal_set_amount(value);
  // @@protoc_insertion_point(field_set:recipe.Ingredience.amount)
}
inline float Ingredience::_internal_amount() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.amount_;
}
inline void Ingredience::_internal_set_amount(float value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.amount_ = value;
}

// string name = 2;
inline void Ingredience::clear_name() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.name_.ClearToEmpty();
}
inline const std::string& Ingredience::name() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:recipe.Ingredience.name)
  return _internal_name();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Ingredience::set_name(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.name_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:recipe.Ingredience.name)
}
inline std::string* Ingredience::mutable_name() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:recipe.Ingredience.name)
  return _s;
}
inline const std::string& Ingredience::_internal_name() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.name_.Get();
}
inline void Ingredience::_internal_set_name(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.name_.Set(value, GetArena());
}
inline std::string* Ingredience::_internal_mutable_name() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _impl_.name_.Mutable( GetArena());
}
inline std::string* Ingredience::release_name() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:recipe.Ingredience.name)
  return _impl_.name_.Release();
}
inline void Ingredience::set_allocated_name(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.name_.SetAllocated(value, GetArena());
  if (::google::protobuf::internal::DebugHardenForceCopyDefaultString() && _impl_.name_.IsDefault()) {
    _impl_.name_.Set("", GetArena());
  }
  // @@protoc_insertion_point(field_set_allocated:recipe.Ingredience.name)
}

// string unit = 3;
inline void Ingredience::clear_unit() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.unit_.ClearToEmpty();
}
inline const std::string& Ingredience::unit() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:recipe.Ingredience.unit)
  return _internal_unit();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Ingredience::set_unit(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.unit_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:recipe.Ingredience.unit)
}
inline std::string* Ingredience::mutable_unit() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_unit();
  // @@protoc_insertion_point(field_mutable:recipe.Ingredience.unit)
  return _s;
}
inline const std::string& Ingredience::_internal_unit() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.unit_.Get();
}
inline void Ingredience::_internal_set_unit(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.unit_.Set(value, GetArena());
}
inline std::string* Ingredience::_internal_mutable_unit() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _impl_.unit_.Mutable( GetArena());
}
inline std::string* Ingredience::release_unit() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:recipe.Ingredience.unit)
  return _impl_.unit_.Release();
}
inline void Ingredience::set_allocated_unit(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.unit_.SetAllocated(value, GetArena());
  if (::google::protobuf::internal::DebugHardenForceCopyDefaultString() && _impl_.unit_.IsDefault()) {
    _impl_.unit_.Set("", GetArena());
  }
  // @@protoc_insertion_point(field_set_allocated:recipe.Ingredience.unit)
}

// -------------------------------------------------------------------

// Recipe

// uint32 portions = 1;
inline void Recipe::clear_portions() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.portions_ = 0u;
}
inline ::uint32_t Recipe::portions() const {
  // @@protoc_insertion_point(field_get:recipe.Recipe.portions)
  return _internal_portions();
}
inline void Recipe::set_portions(::uint32_t value) {
  _internal_set_portions(value);
  // @@protoc_insertion_point(field_set:recipe.Recipe.portions)
}
inline ::uint32_t Recipe::_internal_portions() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.portions_;
}
inline void Recipe::_internal_set_portions(::uint32_t value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.portions_ = value;
}

// uint32 active_time = 2;
inline void Recipe::clear_active_time() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.active_time_ = 0u;
}
inline ::uint32_t Recipe::active_time() const {
  // @@protoc_insertion_point(field_get:recipe.Recipe.active_time)
  return _internal_active_time();
}
inline void Recipe::set_active_time(::uint32_t value) {
  _internal_set_active_time(value);
  // @@protoc_insertion_point(field_set:recipe.Recipe.active_time)
}
inline ::uint32_t Recipe::_internal_active_time() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.active_time_;
}
inline void Recipe::_internal_set_active_time(::uint32_t value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.active_time_ = value;
}

// uint32 passive_time = 3;
inline void Recipe::clear_passive_time() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.passive_time_ = 0u;
}
inline ::uint32_t Recipe::passive_time() const {
  // @@protoc_insertion_point(field_get:recipe.Recipe.passive_time)
  return _internal_passive_time();
}
inline void Recipe::set_passive_time(::uint32_t value) {
  _internal_set_passive_time(value);
  // @@protoc_insertion_point(field_set:recipe.Recipe.passive_time)
}
inline ::uint32_t Recipe::_internal_passive_time() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.passive_time_;
}
inline void Recipe::_internal_set_passive_time(::uint32_t value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.passive_time_ = value;
}

// repeated .recipe.Ingredience ingrediences = 4;
inline int Recipe::_internal_ingrediences_size() const {
  return _internal_ingrediences().size();
}
inline int Recipe::ingrediences_size() const {
  return _internal_ingrediences_size();
}
inline void Recipe::clear_ingrediences() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.ingrediences_.Clear();
}
inline ::recipe::Ingredience* Recipe::mutable_ingrediences(int index)
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_mutable:recipe.Recipe.ingrediences)
  return _internal_mutable_ingrediences()->Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField<::recipe::Ingredience>* Recipe::mutable_ingrediences()
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_mutable_list:recipe.Recipe.ingrediences)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _internal_mutable_ingrediences();
}
inline const ::recipe::Ingredience& Recipe::ingrediences(int index) const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:recipe.Recipe.ingrediences)
  return _internal_ingrediences().Get(index);
}
inline ::recipe::Ingredience* Recipe::add_ingrediences() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::recipe::Ingredience* _add = _internal_mutable_ingrediences()->Add();
  // @@protoc_insertion_point(field_add:recipe.Recipe.ingrediences)
  return _add;
}
inline const ::google::protobuf::RepeatedPtrField<::recipe::Ingredience>& Recipe::ingrediences() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_list:recipe.Recipe.ingrediences)
  return _internal_ingrediences();
}
inline const ::google::protobuf::RepeatedPtrField<::recipe::Ingredience>&
Recipe::_internal_ingrediences() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.ingrediences_;
}
inline ::google::protobuf::RepeatedPtrField<::recipe::Ingredience>*
Recipe::_internal_mutable_ingrediences() {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return &_impl_.ingrediences_;
}

// repeated string job_steps = 5;
inline int Recipe::_internal_job_steps_size() const {
  return _internal_job_steps().size();
}
inline int Recipe::job_steps_size() const {
  return _internal_job_steps_size();
}
inline void Recipe::clear_job_steps() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.job_steps_.Clear();
}
inline std::string* Recipe::add_job_steps() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  std::string* _s = _internal_mutable_job_steps()->Add();
  // @@protoc_insertion_point(field_add_mutable:recipe.Recipe.job_steps)
  return _s;
}
inline const std::string& Recipe::job_steps(int index) const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:recipe.Recipe.job_steps)
  return _internal_job_steps().Get(index);
}
inline std::string* Recipe::mutable_job_steps(int index)
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_mutable:recipe.Recipe.job_steps)
  return _internal_mutable_job_steps()->Mutable(index);
}
template <typename Arg_, typename... Args_>
inline void Recipe::set_job_steps(int index, Arg_&& value, Args_... args) {
  ::google::protobuf::internal::AssignToString(
      *_internal_mutable_job_steps()->Mutable(index),
      std::forward<Arg_>(value), args... );
  // @@protoc_insertion_point(field_set:recipe.Recipe.job_steps)
}
template <typename Arg_, typename... Args_>
inline void Recipe::add_job_steps(Arg_&& value, Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::google::protobuf::internal::AddToRepeatedPtrField(*_internal_mutable_job_steps(),
                               std::forward<Arg_>(value),
                               args... );
  // @@protoc_insertion_point(field_add:recipe.Recipe.job_steps)
}
inline const ::google::protobuf::RepeatedPtrField<std::string>&
Recipe::job_steps() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_list:recipe.Recipe.job_steps)
  return _internal_job_steps();
}
inline ::google::protobuf::RepeatedPtrField<std::string>*
Recipe::mutable_job_steps() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_mutable_list:recipe.Recipe.job_steps)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _internal_mutable_job_steps();
}
inline const ::google::protobuf::RepeatedPtrField<std::string>&
Recipe::_internal_job_steps() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.job_steps_;
}
inline ::google::protobuf::RepeatedPtrField<std::string>*
Recipe::_internal_mutable_job_steps() {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return &_impl_.job_steps_;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace recipe


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // recipe_2eproto_2epb_2eh
