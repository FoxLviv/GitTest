using Microsoft.EntityFrameworkCore;
using Microsoft.EntityFrameworkCore.Metadata.Builders;
using DataBase.Entities;


namespace DataBase.Configurations
{
    class UserConfiguration:IEntityTypeConfiguration<UserEntities>
    {
        public void Configure(EntityTypeBuilder<UserEntities> builder)
        {
            builder.HasKey(e => e.Id);

            builder.Property(e => e.Email);
                
        }
    }
}
